#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    int vetorA[30], vetorB[30], vetorC[30];
    int i, j, troca;

    for (i=0; i<30;i++) {
        // vetor a
        printf("Digite %d número para o vetor A: ", i);
        fflush(stdin);
        scanf("%d", &vetorA[i]);

        // vetor b
        printf("\nDigite %d número para o vetor B: ", i);
        fflush(stdin);
        scanf("%d", &vetorB[i]);

        // soma a+b
        vetorC[i] = vetorA[i]+vetorB[i];
    }
    // ordena a soma em ordem crescente
    for (i = 0; i < 29; i++) {

        for (j=i+1; j < 30; j++) {

            if (vetorC[i] > vetorC[j]) {
                troca = vetorC[i];
                vetorC[i] = vetorC[j];
                vetorC[j] = troca;
            }
        }
    }
    for (i=0;i<30;i++) {
        printf("\n%d - ", vetorC[i]);
    }
}