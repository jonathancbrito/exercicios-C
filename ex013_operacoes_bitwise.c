#include <stdio.h>
#include<locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    int v1, v2;
    printf("Digite o primeiro valor: ");
    fflush(stdin);
    scanf("%d", &v1);
    printf("Digite o segundo valor: ");
    fflush(stdin);
    scanf("%i", &v2);
    printf("\n---- OPERACÕES BITWISE ----");
    printf("\n Calculando %i & %d é igual a %i", v1, v2, (v1&v2)); // conjuncao AND
    printf("\n Calculando %i | %d é igual a %i", v1, v2, (v1|v2)); // disjuncao OR
    printf("\n Calculando %i ^ %d é igual a %i", v1, v2, (v1^v2)); // disjuncao exlusiva XOR
}