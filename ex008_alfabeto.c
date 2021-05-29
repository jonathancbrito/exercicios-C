#include <stdio.h>
void main() {
    char l;
    printf("Digite uma letra: ");
    scanf("%c", &l);
    char ant = l - 1;
    char dep = l + 1;
    printf("\nAntes da letra %c temos a letra %c. Depois temos a letra %c", l, ant, dep);
}