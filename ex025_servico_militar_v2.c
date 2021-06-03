#include <stdio.h>
#include <locale.h>
#include <time.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int anoAtual = data->tm_year + 1900;
    int anoNasc;
    printf("<<< EX025 - Serviço Militar v2.0 >>>\n\n");
    printf("Atualmente estamos no ano %i.", anoAtual);
    printf("\nEm que ano você nasceu? ");
    fflush(stdin);
    scanf("%i", &anoNasc);
    printf("\n----------------------------------");
    if (anoAtual-anoNasc > 18){
        printf("\nSua idade atual é de %i anos.", anoAtual-anoNasc);
        printf("\nSeu alistamento foi em %i. Já se passaram %i anos.", anoNasc+18, anoAtual-(anoNasc+18));
    } else if (anoAtual-anoNasc < 18) {
        printf("\nSua idade atual é de %i anos.", anoAtual-anoNasc);
        printf("\nSeu alistamento é daqui a %i anos.", (anoNasc+18)-anoAtual);
    } else {
        printf("\nSua idade atual é de %i anos.", anoAtual-anoNasc);
        printf("\nVocê completa 18 anos exatamente em %i vá se alistar.", anoNasc+18);
    }
    
    printf("\n----------------------------------");

}