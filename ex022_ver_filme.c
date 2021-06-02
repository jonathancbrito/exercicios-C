#include <stdio.h>
#include <locale.h>
#include <time.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    time_t t;
    time(&t);
    struct tm *data;
    data = localtime(&t);
    int hora = data->tm_hour;
    float qntDin;
    int hFilme;
    printf("¨¨¨¨** EX020 - Dá para ver o filme? **¨¨¨¨\n\n");
    printf("======== CINEMA ESTUDONAUTA ========\n\n");
    printf("Que horas começa o filme? ");
    fflush(stdin);
    scanf("%i", &hFilme);
    printf("HORÁRIO DO FILME: %ih = PREÇO DO INGRESSO: R$20\n", hFilme);
    printf("------------------------------------------\n");
    printf("Quanto de dinheiro você tem? R$");
    fflush(stdin);
    scanf("%f",&qntDin);
    printf("Agora são %i horas", hora);
     if(qntDin < 20 || hora >= hFilme){
         printf("\nInfelizmente não é possível comprar o ingresso!");

     } else {
         if (qntDin >= 20 && hora < hFilme) {
              printf("\nVocê consegue comprar o ingresso!");
         }
     }
}