#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    int elementos[5];
    int i;

    for (i = 0;i < 5; i++) {
        printf("\nDigite o %d° elemento: ", i);
        fflush(stdin);
        scanf("%d", &elementos[i]);
    }
    for (i = 4; i >= 0; i--){
        printf("\n%d° elemento: %d\n", i+1, elementos[i]);
    }
}