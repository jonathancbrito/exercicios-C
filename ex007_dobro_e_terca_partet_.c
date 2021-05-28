#include <stdio.h>
#include <locale.h>

void main() {
    int num, dobro;
    float terpt;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um número: ");
    scanf("%d", &num);
    dobro = 2*num;
    terpt = num/3;
    printf("\nAnalisando o número %d, seu dobro é %d e a terça parte é %.1f.", num, dobro, terpt);
}