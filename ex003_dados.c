#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    char nome[40];
    int idade;
    float peso;
    printf("<<< Ex - 003 >>>\n");
    printf("Qual é o seu nome? ");  // string não precisa usar &nome
    gets(nome);  
    printf("\nQuantos anos você tem? ");
    fflush(stdin);
    scanf("%d", &idade);
    printf("\nQual é o seu peso? ");
    scanf("%f", &peso);
    printf("\n-------<<< PROCESSANDO >>>--------\n");
    printf("Muito prazer, %s. Você tem %d anos e pesa %.1fKg correto?\n", nome, idade, peso);
    printf("\n FIM.");
}