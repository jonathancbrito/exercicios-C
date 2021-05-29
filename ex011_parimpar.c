#include <stdio.h>
#include <locale.h>
void main() {
    int num, mod;
    setlocale(LC_ALL, "Portuguese");
    printf("Digite um número: ");
    fflush(stdin);
    scanf("%d", &num);
    printf("O número digitado é %s", (num%2==0)?"PAR":"ÍMPAR");
}