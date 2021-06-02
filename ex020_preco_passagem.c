#include <stdio.h>
#include <locale.h>

void main () {
    setlocale(LC_ALL, "Portuguese");
    int dist;
    printf("===== TABELA DE PREÇOS =====\n\n");
    printf("Viagens até 200 Km \t R$0.50/Km\nA partir de 200 Km \t R$0.35/Km");
    printf("\n--------------------------------");
    printf("\nDigite a distância a ser percorrida: ");
    fflush(stdin);
    scanf("%d", &dist);
     if(dist <= 200) {
         printf("Valor total da vigem: R$%.2f", dist*0.5);
     } else {
         if (dist > 200) {
             printf("Valor total da vigem: R$%.2f", dist*0.35);
         }
     }

}