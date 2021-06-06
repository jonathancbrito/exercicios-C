#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    printf("Me diga dois n�meros e eu colocarei os dois em ordem crescente.\n\n");
    int n1, n2, n3;
    printf("Primero n�mero: ");
    fflush(stdin);
    scanf("%i", &n1);
    printf("\nSegundo n�mero: ");
    fflush(stdin);
    scanf("%i", &n2);
    printf("\nTerceiro n�mero: ");
    fflush(stdin);
    scanf("%i", &n3);

    if (n1<n2 && n1<n3 && n2<n3){
        printf("Os n�meros em ordem s�o %i , %i e %i", n1, n2, n3); 
        printf("\n-------------------------\n");
        printf("MAIOR: %i", n3);
        printf("\nINTERMEDI�RIO: %i", n2);
        printf("\nMENOR: %i", n1);

    } else if (n1<n2 && n1<n3 && n2>n3) {
        printf("Os n�meros em ordem s�o %i , %i e %i", n1, n3, n2); 
        printf("\n-------------------------\n");
        printf("MAIOR: %i", n2);
        printf("\nINTERMEDI�RIO: %i", n3);
        printf("\nMENOR: %i", n1);

    }  else if (n2<n1 && n1<n3 && n2<n3) {
        printf("Os n�meros em ordem s�o %i , %i e %i", n2, n1, n3);
        printf("\n-------------------------\n");
        printf("MAIOR: %i", n3);
        printf("\nINTERMEDI�RIO: %i", n1);
        printf("\nMENOR: %i", n2);

    }  else if (n2<n3 && n2<n1 && n1>n3) {
        printf("Os n�meros em ordem s�o %i , %i e %i", n2, n3, n1);
        printf("\n-------------------------\n");
        printf("MAIOR: %i", n1);
        printf("\nINTERMEDI�RIO: %i", n3);
        printf("\nMENOR: %i", n2);

    }  else if (n3<n1 && n3<n2 && n2>n1) {
        printf("Os n�meros em ordem s�o %i , %i e %i", n3, n1, n2);
        printf("\n-------------------------\n");
        printf("MAIOR: %i", n2);
        printf("\nINTERMEDI�RIO: %i", n1);
        printf("\nMENOR: %i", n3);

    }  else if (n3<n2 && n3<n1 && n2<n1) {
        printf("Os n�meros em ordem s�o %i , %i e %i", n3, n2, n1);
        printf("\n-------------------------\n");
        printf("MAIOR: %i", n1);
        printf("\nINTERMEDI�RIO: %i", n2);
        printf("\nMENOR: %i", n3);
    }

    return 0;
}