#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX029 - Seu peso nos Planetas v1.0 >>>\n\n");
    float pTerra;
    int opc;
    printf("Seu peso na terra (Kg) = ");
    fflush(stdin);
    scanf("%f", &pTerra);
    printf("\n\t ESCOLHA UM PLANETA");
    printf("\n    ==========================");
    printf("\n\t1     Mercúrio");
    printf("\n\t2     Vênus");
    printf("\n\t3     Marte");
    printf("\n\t4     Júpter");
    printf("\n\t5     Saturno");
    printf("\n\t6     Urano");
    printf("\n    ==========================\n");
    printf("\tDigite sua opção => ");
    fflush(stdin);
    scanf("%i", &opc);

    switch (opc) {
        case 1:
           printf("Seu peso em Mercúrio é %.2f", pTerra*0.37);
           break;

        case 2:
           printf("Seu peso em Vênus é %.2f", pTerra*0.88);
           break;

        case 3:
           printf("Seu peso em Marte é %.2f", pTerra*0.38);
           break;

        case 4:
           printf("Seu peso em Júpter é %.2f", pTerra*2.64);
           break;

        case 5:
          printf("Seu peso em Saturno é %.2f", pTerra*1.15);
           break;

        case 6:
          printf("Seu peso em Urano é %.2f", pTerra*1.17);
           break;

        default:
            printf("[404] Planeta não encontrado. Tente novamente");
            break; // opcional
    }
    
}