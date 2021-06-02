#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguse");
    printf("<<<< EX021 - Inverso ou Oposto >>>>\n\n");
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
     if (num < 0) {
         printf("O oposto de %i é %i", num, -num);
     } else {
         if (num > 0) {
             printf("O inverso de %i é %.2f ", num, (float)1/num);
         }
     }
}