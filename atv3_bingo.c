#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    printf("=====================================\n");
    printf("         CARTELAS DO BINGO           \n");
    printf("=====================================\n\n");

    int qntCartelas, num, cartelas[10];
    int i, j, k, l, cont;

    printf("Informe a quantidade de cartelas a serem criadas: ");
    scanf("%d", &qntCartelas);
    fflush(stdin);
    srand(time(NULL));

    cont = 0;
    for(i=0;i<qntCartelas;i++){
        // gera numeros 10 aleatórios para cada cartela
        for(j=0;j<10;j++){
            num = (rand() % 99);
            
            // verifica se tem números repetidos em cada cartela
            for(k=0;k<=j-1;k++){
                if(num == cartelas[k]){
                    cont = 1;
                    break;
                }
            }
            if(cont == 1){
                cont = 0;
                j=j-1;
            } else {
                cartelas[j] = num;
            }
        }
        printf("Cartela %d:\n", i+1);
	  	for(l = 0; l < 10; l++){
	  		printf (" %d ", cartelas[l]);
		}
		printf("\n\n");

    }

}