#include <stdio.h>
void main() {
    int v1, v2;
    printf("Digite o primeiro valor: ");
    fflush(stdin);
    scanf("%d", &v1);
    printf("Digite o segundo valor: ");
    fflush(stdin);
    scanf("%i", &v2);
    printf("\n---- OPERACOES BITWISE ----");
    printf("\n Calculando %i & %d e igual a %i", v1, v2, (v1&v2)); // conjuncao AND
    printf("\n Calculando %i | %d e igual a %i", v1, v2, (v1|v2)); // disjuncao OR
    printf("\n Calculando %i ^ %d e igual a %i", v1, v2, (v1^v2)); // disjuncao exlusiva XOR
}