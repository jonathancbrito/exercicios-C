#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    printf(" Listagem de Alunos ");
    printf("\nNome    \tNota");
    printf("\n--------------------");
    printf("\nAna Beatriz \t8.5");
    printf("\nBianca Martins \t9.0");
    printf("\nCl�udio S� \t5.5");
    printf("\nGiovana Silva \t7.5");
}