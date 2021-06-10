#include <stdio.h>
#include <locale.h>
#include <string.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    char palavra[50];
    int tam, i;

    printf("Digite uma palavra: ");
    gets(palavra);
    tam = strlen(palavra);
    
  // escreve a palavra digitada ao contrário
    for (i = tam-1; i >= 0; i--) {
        printf("%c", palavra[i]);
    }
}