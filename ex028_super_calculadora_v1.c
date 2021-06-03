#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX028 - Super Calculadora v1.0 >>>\n\n");
    int val1, val2;
    char opt;
    printf("VALOR 1 = ");
    fflush(stdin);
    scanf("%i", &val1);
    printf("VALOR 2 = ");
    fflush(stdin);
    scanf("%i", &val2);
    printf("\n=======================\n");
    printf("+ \t Adição\n");
    printf("- \t Subtração\n");
    printf("* \t Multiplicação\n");
    printf("/ \t Divisão");
    printf("\n=======================\n");
    printf("Digite sua opção => ");
    fflush(stdin);
    scanf("%c", &opt);
    printf("\n------------------------------------\n");

    switch (opt) {
        case '+':
           printf("O resultado de %i + %i é igual a %i", val1, val2, val1+val2);
           break;
        case '-':
           printf("O resultado de %i - %i é igual a %i", val1, val2,val1-val2);
           break;
         case '*':
           printf("O resultado de %i * %i é igual a %i", val1, val2,val1*val2);
           break;
         case '/':
           printf("O resultado de %i / %i é igual a %.1f", val1, val2,(float)val1/val2);
           break;    
        default:
           printf("ERRO");   
          
    }
    printf("\n------------------------------------");
    printf("\nVOLTE SEMPRE");
    
}