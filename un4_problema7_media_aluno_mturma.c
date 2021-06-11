#include <stdio.h>
#include <locale.h>

#define TAM 20

void main() {
    setlocale(LC_ALL, "Portuguese");
    float mediaAluno[TAM];
    float notas[TAM][4];   // cria uma matriz de 20 linha e 4 colunas
    float somaTurma, mediaTurma, somaAluno;
    int i, j;

    somaAluno = 0;
    mediaTurma = 0;

    for (i=0; i<TAM; i++){
        somaAluno = 0;
        for (j=0; j<4; j++){
            printf("Informe a %d nota do aluno %i: ", j+1, i+1);
            fflush(stdin);
            scanf("%f", &notas[i][j]);
            somaAluno = somaAluno + notas[i][j];
        }
        mediaAluno[i] = somaAluno/4;
        somaTurma = somaTurma + mediaAluno[i]; 
    }
    mediaTurma = somaTurma/TAM;
    for (i=0; i<TAM;i++){
        printf("\nA média do aluno %d é: %.2f\n", i+1, mediaAluno[i]);
    }
    printf("\nA média da turma é %.2f\n", mediaTurma);

}