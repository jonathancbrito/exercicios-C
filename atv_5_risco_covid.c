#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h>

int main(); // funcao principal
// dados do paciente
char nome[180], cpf[50], sexo[1]; 
int idade;


// questionario
struct elemento {
    char pergunta[256];
    int pontos;
};

struct elemento questoes[] = {
    { .pergunta = "Tem Febre? ", .pontos = 5},
    { .pergunta = "Tem dor de cabe�a? ", .pontos = 1},
    { .pergunta = "Tem secre��o nasal ou espirros? ", .pontos = 1},
    { .pergunta = "Tem dor/irrita��o na garganta? ", .pontos = 1},
    { .pergunta = "Tem tosse seca? ", .pontos = 3},
    { .pergunta = "Tem dificuldade respirat�ria? ", .pontos = 10},
    { .pergunta = "Tem dores no corpo? ", .pontos = 1},
    { .pergunta = "Tem diarr�ia? ", .pontos = 1},
    { .pergunta = "Esteve em contato, nos �ltimos 14 dias, com um caso diagnosticado com COVID-19? ?", .pontos = 10},
    { .pergunta = "Esteve em locais com grande aglomera��o? ", .pontos = 3},
};

void questionario(){
    int i = 0;
    int soma = 0;
    char resp;

      // salva os dados do paciente em um arquivo externo passo 1-2
    FILE *dadosTxt;
    dadosTxt = fopen("dataBase.txt", "a");

    if (dadosTxt==NULL){
        printf("[ERRO] N�o foi poss�vel criar o arquivo");
    }


    system("cls");
    printf("Responda o question�rio abaixo com 'S' para Sim ou 'N' para N�o\n\n");

    for(i=0;i<10;i++){
       printf("%s", questoes[i].pergunta);
       scanf("%c", &resp);
       fflush(stdin);
       fprintf(dadosTxt, "%s: %c\n",questoes[i].pergunta, resp);
       if(resp == 'S' || resp == 's'){
           soma = soma + questoes[i].pontos;
       }

    }
    fprintf(dadosTxt, " Total de pontos: %d \n\n", soma); // salva os dados da pontua��o
    fclose(dadosTxt);
    // analisa o estado de risco do paciente de acordo com a soma
    system("cls");
    if(soma >= 0 && soma < 10){
    	printf(" Total %d pontos, estado de BAIXO RISCO\n", soma);
	}
	if(soma >= 10 && soma < 20){
    	printf(" Total %d pontos, estado de M�DIO RISCO\n", soma);
	}
	if(soma >= 20){
    	printf(" Total %d pontos, estado de ALTO RISCO\n\n", soma);
	}
	soma = 0; // zera a soma para o pr�ximo
	// volta ao menu
	printf("Tecle ENTER para voltar a Tela Inicial");
	getchar();
	system("cls");
	main();
}

// funcao para cadastrar os pacientes
void cadastro(){
    setlocale(LC_ALL, "Portuguese");

    // salva os dados do paciente em um arquivo externo passo 1-2
    FILE *dadosTxt;
    dadosTxt = fopen("dataBase.txt", "a");

    if (dadosTxt==NULL){
        printf("[ERRO] N�o foi poss�vel criar o arquivo");
    }

    printf("\nInforme o nome do paciente: ");

    scanf("%s", nome);
    fflush(stdin);

    printf("\nInforme o CPF do paciente: ");
    scanf("%s", cpf);
    fflush(stdin);

    printf("\nInforme o sexo do paciente (M/F): ");
    scanf("%s", sexo);
    fflush(stdin);

    printf("\nInforme a idade do paciente: ");
    scanf("%i", &idade);
    fflush(stdin);

    // salva os dados do paciente em um arquivo externo passo 2-2
    fprintf(dadosTxt, "\nNome: %s ", nome);
    fprintf(dadosTxt, "\nCPF: %s ", cpf);
    fprintf(dadosTxt, "\nSexo: %s ", sexo);
    fprintf(dadosTxt, "\nIdade: %d \n\n", idade);
    fclose(dadosTxt);

    printf("Os dados foram salvos em um arquivo externo .txt\n");
    printf("Presione ENTER para continuar...\n");
    getchar();
    questionario();
}


int main() {
    setlocale(LC_ALL, "Portuguese");
    int opcao;
    
    printf("<<<-==== MENU ====->>>\n");
    printf(" 1 - CADASTRAR PACIENTE \n");
    printf(" 0 - Sair \n");
    scanf("%d", &opcao);

    switch(opcao){
        case 0: // encerra o programa
            printf("Encerrando o programa...");
            break;

        case 1: // realiza o cadastro
            cadastro();
            break;

        default:
            break;    
                
    }
}
