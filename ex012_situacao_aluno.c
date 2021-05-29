#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    float n1, n2, media;
    printf("Primeira nota: ");
    fflush(stdin);
    scanf("%f", &n1);
    printf("Segunda nota: ");
    fflush(stdin);
    scanf("%f", &n2);
    media = (n1+n2)/2;
    printf("Média do aluno: %.1f", media);
    printf("\nA situação é: %s", (media>=7)?"Aprovado":"Reprovado");
}