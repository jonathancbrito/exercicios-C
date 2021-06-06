#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX030 - Pre�o por �poca >>>\n\n");
    float precop;
    int opcao;
    printf("Digite o pre�o do produto R$");
    fflush(stdin);
    scanf("%f", &precop);
    printf("\n\t ESCOLHA UM PER�ODO");
    printf("\n    ==========================");
    printf("\n\t1     Carnaval [+10]");
    printf("\n\t2     F�rias Escolares [+20]");
    printf("\n\t3     Dia das Crian�as [+5]");
    printf("\n\t4     Black Friday [-30]");
    printf("\n\t5     Natal [-5]");
    printf("\n    ==========================\n");
    printf("\tDigite sua op��o => ");
    fflush(stdin);
    scanf("%i", &opcao);

    printf("\n----------------------------------------------------");
    
    switch (opcao) {
        case 1:
           printf("\nNa �poca de CARNAVAL, o pre�o vai para R$%.2f", precop+precop*0.1);
           break;

        case 2:
           printf("\nNa �poca de F�RIAS, o pre�o vai para R$%.2f", precop+precop*0.2);
           break;

        case 3:
           printf("\nNa �poca de DIA DAS CRIAN�AS, o pre�o vai para R$%.2f", precop+precop*0.05);
           break;

        case 4:
           printf("\nNa �poca de BLACK FRIDAY, o pre�o vai para R$%.2f", precop-precop*0.3);
           break;
        case 5:
          printf("\nNa �poca de NATAL, o pre�o vai para R$%.2f", precop-precop*0.05);
           break;

        default:
            printf("\n[404] �poca n�o encontrada. Tente novamente");
            break; // �tltimo break; opcional
    }
    printf("\n----------------------------------------------------");
    printf("\nVOLTE SEMPRE");
    
}