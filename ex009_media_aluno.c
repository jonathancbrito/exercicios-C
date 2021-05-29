#include <stdio.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    char nome;
    float n1, n2, m;
    printf("<<< EX009 - M�dia aluno >>>\n");
    printf("Nome do aluno: ");
    fflush(stdin);
    scanf("%c", &nome);
    printf("\nNota 1: ");
    fflush(stdin);
    scanf("%f", &n1);
    printf("Nota 2: ");
    fflush(stdin);
    scanf("%f", &n2);
    m = (n1+n2)/2;
    printf("O aluno %c tirou notas %.2f e %.2f e ficou com m�dia %.2f.", nome, n1, n2, m);
}