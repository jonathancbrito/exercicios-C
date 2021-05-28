#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    char nome1[20], nome2[20], nome3[20];
    char sexo1, sexo2, sexo3;
    float nota1, nota2, nota3;
    printf("<<< EX004 - Listagem >>>\n");
    // cadastro 1
    printf("Cadastrando a primeira pessoa: \n");
    printf("-----------------------------\n");
    printf("NOME: ");
    gets(nome1);
    printf("SEXO [M/F]: ");
    sexo1 = getchar();
    printf("NOTA: ");
    scanf("%f", &nota1);
    
    // cadastro 2
    printf("\nCadastrando a segunda pessoa: \n");
    printf("-----------------------------\n");
    printf("NOME: ");
    fflush(stdin);
    gets(nome2);
    printf("SEXO [M/F]: ");
    fflush(stdin);
    scanf("%c", &sexo2);
    printf("NOTA: ");
    fflush(stdin);
    scanf("%f", &nota2);

    // cadastro 3
    printf("\nCadastrando a terceira pessoa: \n");
    printf("-----------------------------\n");
    printf("NOME: ");
    fflush(stdin);
    gets(nome3);
    printf("SEXO [M/F]: ");
    fflush(stdin);
    scanf("%c", &sexo3);
    printf("NOTA: ");
    fflush(stdin);
    scanf("%f", &nota3);

    // listagem completa
    printf("\nListagem Completa\n");
    printf("-----------------------------------\n");
    printf("NOME                SEXO NOTA\n");
    printf("%-20s %c %6.1f\n", nome1, sexo1, nota1);
    printf("%-20s %c %6.1f\n", nome2, sexo2, nota2);
    printf("%-20s %c %6.1f\n", nome3, sexo3, nota3);
    printf("\n-----------------------------------\n");
}