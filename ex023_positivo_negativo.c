#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX023 - Positivo ou Negativo");
    printf("\nMe diga um número e eu te direi se é POSITIVO, NEGATIVO ou NULO.\n\n");
    float num;
    printf("Digite um número: ");
    scanf("%f", &num);
    if (num < 0) {
        printf("O valor %.0f é NEGATIVO.", num);
    } else if (num > 0) printf("O valor %.0f é POSITIVO.", num);
      else printf("O valor %.0f é NULO.", num); 
    
    return 0;
}