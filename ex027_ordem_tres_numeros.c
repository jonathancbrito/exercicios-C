#include <stdio.h>
#include <locale.h>

int main () {
    setlocale(LC_ALL, "Portuguese");
    printf("Me diga dois números e eu colocarei os dois em ordem crescente.\n\n");
    int n1, n2, n3;
    printf("Primero número: ");
    fflush(stdin);
    scanf("%i", &n1);
    printf("\nSegundo número: ");
    fflush(stdin);
    scanf("%i", &n2);
    printf("\nTerceiro número: ");
    fflush(stdin);
    scanf("%i", &n3);

    if (n1<n2 && n1<n3 && n2<n3){
        printf("Os números em ordem são %i , %i e %i", n1, n2, n3); // ok
        printf("\n-------------------------\n");
        printf("MAIOR: %i", n3);
        printf("\nINTERMEDIÁRIO: %i", n2);
        printf("\nMENOR: %i", n1);

    } else if (n1<n2 && n1<n3 && n2>n3) {
        printf("Os números em ordem são %i , %i e %i", n1, n3, n2); //ok
        printf("\n-------------------------\n");
        printf("MAIOR: %i", n2);
        printf("\nINTERMEDIÁRIO: %i", n3);
        printf("\nMENOR: %i", n1);

    }  else if (n2<n1 && n1<n3 && n2<n3) {
        printf("Os números em ordem são %i , %i e %i", n2, n1, n3); //ok
        printf("\n-------------------------\n");
        printf("MAIOR: %i", n3);
        printf("\nINTERMEDIÁRIO: %i", n1);
        printf("\nMENOR: %i", n2);

    }  else if (n2<n3 && n2<n1 && n1>n3) {
        printf("Os números em ordem são %i , %i e %i", n2, n3, n1); // ok
        printf("\n-------------------------\n");
        printf("MAIOR: %i", n1);
        printf("\nINTERMEDIÁRIO: %i", n3);
        printf("\nMENOR: %i", n2);

    }  else if (n3<n1 && n3<n2 && n2>n1) {
        printf("Os números em ordem são %i , %i e %i", n3, n1, n2); //ok
        printf("\n-------------------------\n");
        printf("MAIOR: %i", n2);
        printf("\nINTERMEDIÁRIO: %i", n1);
        printf("\nMENOR: %i", n3);

    }  else if (n3<n2 && n3<n1 && n2<n1) {
        printf("Os números em ordem são %i , %i e %i", n3, n2, n1); // ok
        printf("\n-------------------------\n");
        printf("MAIOR: %i", n1);
        printf("\nINTERMEDIÁRIO: %i", n2);
        printf("\nMENOR: %i", n3);
    }

    return 0;
}