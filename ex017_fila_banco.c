#include <stdio.h>
#include <locale.h>
#include <time.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    time_t t;
    time(&t);
    struct tm*data;
    data = localtime(&t);
    int anoAtual = data-> tm_year + 1900;
    int anoNasc, idade;

    printf("Em que ano você nasceu? ");
    fflush(stdin);
    scanf("%i", &anoNasc);
    idade = anoAtual - anoNasc;
    printf("\n---------------------\n");
    printf("Você tem %d anos\n", idade);
    printf("Seja bem vindo ao Banco Estudonauta!\n");
    if(idade >= 65){
        printf("=== ATENÇÃO! DIRIJA-SE A FILA PREFERÊNCIAL ===\n");
    }
    printf("---------------------");
}