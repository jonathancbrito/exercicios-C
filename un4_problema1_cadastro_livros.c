#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAM 3

// registro para cadastro dos livros
struct livros {
    int codigo, ano;
    char titulo[200], autor[80], area[50], editora[50];
};

int main() {
    setlocale(LC_ALL, "Portuguese");
    struct livros info[20];
    struct livros troca;
    int i, j;
    int option, acha, busca;

    option = 0;
    while(option != 5) {
        // Menu
        printf("-----------------------------------------\n");
        printf("      <<< CADASTRO DE LIVROS >>>\n");
        printf("-----------------------------------------\n\n");
        printf("Escolha uma opção abaixo:\n");
        printf("1 - CADASTRAR LIVROS\n2 - IMPRIMIR INFORMAÇÕES DOS LIVROS\n3 - PESQUISAR LIVROS POR CÓDIGOS\n4 - ORDENAR OS LIVROS POR ANO\n5 - SAIR DO PROGRAMA\n");
        scanf("%d", &option);

        if (option == 1) {
           system("cls");
           for (i = 0; i < TAM; i++) {
              printf("Digite o código do livro: ");
              fflush(stdin);
              scanf("%d", info[i].codigo);
              printf("\nDigite o título do livro: ");
              fflush(stdin);
              gets(info[i].titulo);
              printf("Digite o autor do livro: ");
              fflush(stdin);
              gets(info[i].autor);
              printf("Digite a área relacionada do livro: ");
              fflush(stdin);
              gets(info[i].area);
              printf("Digite o ano do livro: ");
              fflush(stdin);
              scanf("%d", &info[i].ano);
              printf("Digite a editora do livro: ");
              fflush(stdin);
              gets(info[i].editora);

            }

        } else if (option == 2) {
            system("cls");
            for (i = 0; i < TAM; i++) {
              printf("\n\nLIVRO %d\n", i+1);
              printf("\nCódigo: %d\n", info[i].codigo);
              printf("Título: %s\n", info[i].titulo);
              printf("Autor: %s\n", info[i].autor);
              printf("Área: %s\n", info[i].area);
              printf("Ano: %d\n", info[i].ano);
              printf("Editora: %s", info[i].editora);

            }
            system("pause");
            system("cls");
            // volta para o Menu
            main();
           

        } else if (option == 3) {
            system("cls");
            printf("Digite o que deseja buscar: ");
            fflush(stdin);
            scanf("%d", &busca);
            i = 0;
            acha = 0;
            while ((i < TAM) && (acha == 0)) {
                if (info[i].codigo == busca) {
                    acha = 1;
                } else {
                    i++; 
                } if (acha == 1) {
                    printf("\nCÓDIGO: %d\n", info[i].codigo);
                    printf("TÍTULO: %s\n", info[i].titulo);
                    printf("AUTOR: %s\n", info[i].autor);
                    printf("ÁREA: %s\n", info[i].area);
                    printf("ANO: %d\n", info[i].ano);
                    printf("EDITORA: %s\n\n", info[i].editora);
                } else if (acha != 1){
                     printf("\nRegistro não encontrado!.");

                } else if (option == 4) {
                    system("cls");
                    for (i=0;i<TAM-1;i++) {
                        for (j=1;j<TAM;j++){
                            if (info[i].ano > info[i].ano){
                                troca = info[i];
                                info[i] = info[j];
                                info[j] = troca;
                            }

                        }
                    }
                } for (i=0;i<TAM;i++){
                    printf("\nCÓDIGO: %d, TÍTULO: %s, ANO: %d", info[i].codigo, info[i].titulo, info[i].ano);
                }
            } 
        }  
    }
    return (0);

}