#include <stdio.h>
#include <locale.h>
#include <time.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    time_t t;
    time(&t);
    struct tm*data;
    data = localtime(&t);
    int anoAtual = data-> tm_year + 1900;
    int ano;
    printf("<<<---EX019 - ANO BISSEXTO--->>>\n\n");
    printf("Digite um ano qualquer: ");
    fflush(stdin);
    scanf("%i", &ano);
     if(ano%4 == 0 && ano%100 != 0 || ano%400 == 0){
          printf("O ano %d é BISSEXTO!", ano);

     } else {
         printf("O ano %i NÃO é BISSEXTO!", ano);
     }
   
}