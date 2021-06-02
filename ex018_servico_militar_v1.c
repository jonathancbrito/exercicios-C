#include <stdio.h>
#include <locale.h>
#include <time.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    time_t t;
    time(&t);
    struct tm*data;
    data = localtime(&t);
    int anoAtual = data->tm_year + 1900;
    int anoNasc;
    printf("<<< EX018 - Serviço Militar v1.0>>>\n\n");
    printf("Atualmente estamos no ano de %i \n", anoAtual);
    printf("Em que ano você nasceu? ");
    fflush(stdin);
    scanf("%d",&anoNasc);
    printf("\n----------------------");
    printf("\nSua idade atual é de %i anos.\n", anoAtual-anoNasc);
    if (anoAtual-anoNasc >= 18){
        printf("Já fez 18 anos. Espero que você tenha se alistado.");
    } else {
        if (anoAtual-anoNasc < 18){
            printf("Você ainda não tem 18 anos. Não pode se alistar.");
        }
    }
}