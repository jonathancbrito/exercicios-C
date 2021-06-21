#include <stdio.h>
#include <string.h> // biblioteca para usar as funcoes de string
int main(){
    char nome[80];
    int tamanho;
    printf("Digite o seu nome completo: ");
    gets(nome);
    tamanho = strlen(nome);
    printf("O comprimento do nome e: %d", tamanho);
   
    return 0;
}
