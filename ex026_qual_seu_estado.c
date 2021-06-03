#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX026 - Qual é o seu estado? >>>\n\n");
    char estado[2];
    printf("Em qual estado você nasceu? ");
    fflush(stdin);
    gets(estado);
    if (estado == "SP") {
        printf("Você nasceu em %s, você é PAULISTANO.", estado);
    } else if(estado == "RJ"){
        printf("Você nasceu em %s, você é CARIOCA.", estado);
    } else if(estado == "MG"){
        printf("Você nasceu em %s, você é MINEIRO.", estado);
    } else if(estado == "BA"){
        printf("Você nasceu em %s, você é BAHIANO.", estado);
    } else if(estado == "PE"){
        printf("Você nasceu em %s, você é PERNAMBUCANO.", estado);
    } else if(estado == "CE"){
        printf("Você nasceu em %s, você é CEARENSE.", estado);
    } else {
        printf("Nascendo em %s você é natural da sua cidade, mas ainda não sei como te chamar!:(", estado);
    }

    return 0;
}