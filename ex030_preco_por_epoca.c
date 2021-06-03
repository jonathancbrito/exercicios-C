#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX030 - Preço por Época >>>\n\n");
    float precop;
    int opcao;
    printf("Digite o preço do produto R$");
    fflush(stdin);
    scanf("%f", &precop);
    printf("\n\t ESCOLHA UM PERÍODO");
    printf("\n    ==========================");
    printf("\n\t1     Carnaval [+10]");
    printf("\n\t2     Férias Escolares [+20]");
    printf("\n\t3     Dia das Crianças [+5]");
    printf("\n\t4     Black Friday [-30]");
    printf("\n\t5     Natal [-5]");
    printf("\n    ==========================\n");
    printf("\tDigite sua opção => ");
    fflush(stdin);
    scanf("%i", &opcao);

    printf("\n----------------------------------------------------");
    switch (opcao) {
        case 1:
           printf("\nNa época de CARNAVAL, o preço vai para R$%.2f", precop+precop*0.1);
           break;

        case 2:
           printf("\nNa época de FÉRIAS, o preço vai para R$%.2f", precop+precop*0.2);
           break;

        case 3:
           printf("\nNa época de DIA DAS CRIANÇAS, o preço vai para R$%.2f", precop+precop*0.05);
           break;

        case 4:
           printf("\nNa época de BLACK FRIDAY, o preço vai para R$%.2f", precop-precop*0.3);
           break;
        case 5:
          printf("\nNa época de NATAL, o preço vai para R$%.2f", precop-precop*0.05);
           break;

        default:
            printf("\n[404] Época não encontrada. Tente novamente");
            break; // útltimo break; opcional
    }
    printf("\n----------------------------------------------------");
    printf("\nVOLTE SEMPRE");
    
}