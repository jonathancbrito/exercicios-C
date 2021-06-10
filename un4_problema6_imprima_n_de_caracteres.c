#include <stdio.h>
#include <locale.h>
#include <string.h>

int main() {
    char palavra[30];
    int tam, r;

    printf("Digite a palavra: ");
    gets(palavra);
    tam = strlen(palavra);
    printf("Tamanho da palavra: %d\n\n", tam);

    for(r = 0; r < tam; r++) {
        printf("%d - %s\n", r+1,  palavra);

    }

    return 0;
}