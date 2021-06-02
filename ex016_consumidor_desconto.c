#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    float vtotal;
    printf("Qual foi o valor total da compra? R$");
    fflush(stdin);
    scanf("%f", &vtotal);
    printf("------------------------------------\n");
    printf("Você comprou R$%.3f na nossa loja.\n", vtotal);
    printf("=============ATENÇÃO===============\n");
     if (vtotal >= 500 && vtotal < 1500){
         printf("Por fazer mais de R$500 em compras, você vai receber %.2f de desconto\n", vtotal*10/100);
         printf("O valor a ser pago é R$%.2f! Volte sempre!\n", vtotal - vtotal*10/100); // 10% desconto
     } else if (vtotal >= 1500) {
         printf("Por fazer mais de R$1500 em compras, você vai receber %.2f de desconto\n", vtotal*10/100);
         printf("O valor a ser pago é R$%.2f! Volte sempre!\n", vtotal - vtotal*15/100); // 15% desconto
         
     } else if (vtotal < 500) {
         printf("Você comprou %.2f na nossa loja.\nVolte Sempre!", vtotal);
     }
     printf("\n------------------------------------");

}