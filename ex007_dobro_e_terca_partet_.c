#include <stdio.h>
#include <locale.h>

void main() {
    int num, dobro;
    float terpt;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um número: ");
    scanf("%i", &num);
    dobro = 2*num;
    terpt = (float)num/3; // (float)num para divisão real
     printf("\nAnalisando o número %d, seu dobro é %d e a terça parte é %.2f.", num, dobro, terpt);
}