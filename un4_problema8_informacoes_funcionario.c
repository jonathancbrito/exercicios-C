#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define nFUN 2

struct funcionarios {
    int matricula;
    char nome[50];
    char setor[30];
    float salario;
};

int main() {
    setlocale(LC_ALL, "Portuguese");
    struct funcionarios dados [nFUN];
    int busca, i, acha;
    char op;

    for (i=0;i<nFUN;i++){
        printf("Digite a matrícula do funcionário: ");
        fflush(stdin);
        scanf("%d", &dados[i].matricula);

        printf("Digite o nome: ");
        fflush(stdin);
        gets(dados[i].nome);

        printf("Digite o setor: ");
        fflush(stdin);
        gets(dados[i].setor);

        printf("Digite o salário: ");
        fflush(stdin);
        scanf("%f", &dados[i].salario);
    } 
    do { 
         printf("Deseja realizar busca (S/N): ");
         fflush(stdin);
         scanf("%c", &op);
        } while ((op != 'S') && (op != 's') && (op != 'n') && (op != 'N'));

        while ((op == 's') || (op == 'S')){
            printf("Informe a matrícula que deseja buscar: ");
            fflush(stdin);
            scanf("%d", &busca);
            i = 0;
            acha = 0;
            while ((i<nFUN) && (acha==0)) {
                if (dados[i].matricula == busca) {
                    acha = 1;
                } else {
                    i++;
                }
                if (acha == 1) {
                    printf("O setor é: %s\n", dados[i].setor);
                    printf("O salário é: %.2f\n", dados[i].salario);
                } else {
                    printf("Matrícula não cadastrada!\n");
                }

                do {
                    printf("Deseja realizar busca (S/N)");
                    fflush(stdin);
                    scanf("%c", &op);
                } while ((op != 'S') && (op != 's') && (op != 'N') && (op != 'n'));
            }

        }

    return (0);
}