#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char nome[30];
    int tam, i;

    printf("Digite o nome: ");
    gets(nome);

    tam = strlen(nome); 
    printf("Quantidade de letras do nome: %i", tam);

   // verifica as letras nas posições pares e imprime na tela
    for (i=0; i<tam; i++){
        if (i%2 == 0) {
            printf("\n %c", nome[i]);
        }
    }

    return (0);
}