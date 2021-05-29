#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    char prod[20];
    float prec, desc,precf;
    printf("Produto: ");
    fflush(stdin);
    gets(prod);
    printf("\nPreço de %s: R$", prod);
    fflush(stdin);
    scanf("%f", &prec);
    printf("\nDesconto: (%%) ");
    fflush(stdin);
    scanf("%f", &desc);
    precf = prec - (prec * (float)desc / 100);
    printf("\nO produto %s custa: %.2f \nRecebeu desconto de R$%.2f  \npreço final: R$%.2f ", prod, prec, prec * ((float)desc / 100), precf);

}