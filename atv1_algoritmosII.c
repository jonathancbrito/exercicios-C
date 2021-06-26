#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
    setlocale(LC_ALL, "Portuguese");
    int opcao, vereador, prefeito;
    int verApur = 0, prefApur = 0; // apuração total dos votos para vereador e prefeito
    int votosJF = 0, votosMP = 0, votosZF = 0, vNulosVer = 0; // apuração de votos para cada vereador
    int votosDZ = 0, votosSG = 0, vNulosPref = 0;  // apuração de votos para cada prefeito
    // tela inicial
    printf("-------------------------------------\n");
    printf("\t<<<< ELEIÇÕES 2021 >>>>\n");
    printf("-------------------------------------\n");
    printf("Escolha uma opção abaixo:\n");
    printf("1 - Votar\n2 - Apuração dos votos\n3 - Sair\n");
    scanf("%i", &opcao);
    system("cls");

    while (opcao >= 1 && opcao <= 3 || opcao != 1 || opcao != 2 || opcao != 3) {
      if (opcao == 1) {
          // Votação para Vereador
          printf("===== VOTE PARA VEREADOR =====\n");
          printf(" 111 - João do Frete\n");
          printf(" 222 - Maria da Pamonha\n");
          printf(" 333 - Zé da Farmácia\n");
          printf(" 444 - Voto Nulo\n");
          fflush(stdin);
          scanf("%i", &vereador);

          switch (vereador) {
              case 111:
                printf("\n\a Voto bem sucedido!\n Você votou em João do Frete para Vereador.\n\n");
                verApur = verApur+1;
                votosJF = votosJF+1;
                break;

              case 222:
                printf("\n\a Voto bem sucedido!\n Você votou em Maria da Pamonha para Vereador.\n\n");
                verApur = verApur+1;
                votosMP = votosMP+1;
                break;

              case 333:
                printf("\n\a Voto bem sucedido!\n Você votou em Zé da Farmácia para Vereador.\n\n");
                verApur = verApur+1;
                votosZF = votosZF+1;
                break;

              case 444:
                printf("\n\a Voto bem sucedido!\n Você votou NULO para Vereador.\n\n");
                vNulosVer = vNulosVer+1;
                verApur = verApur+1;
                break;  

              default:
                printf("\aVOTO INVÁLIDO\n\n");
                break;  
            }
            system("pause");
            system("cls");

          // Votação para Prefeito  
          printf("===== VOTE PARA PREFEITO =====\n");
          printf(" 11 - Dr. Zureta\n");
          printf(" 22 - Senhor Gomes\n");
          printf(" 44 - Voto Nulo\n");
          fflush(stdin);
          scanf("%i", &prefeito);

          switch (prefeito) {
              case 11:
                printf("\n\a Voto bem sucedido!\n Você votou em Dr. Zureta para prefeito.\n\n");
                prefApur = prefApur+1;
                votosDZ = votosDZ+1;
                break;

              case 22:
                printf("\n\a Voto bem sucedido!\n Você votou em Senhor Gomes para prefeito.\n\n");
                prefApur = prefApur+1;
                votosSG = votosSG+1;
                break;

              case 44:
                printf("\n\a Voto bem sucedido!\n Você votou NULO para prefeito.\n\n");
                prefApur = prefApur+1;
                vNulosPref = vNulosPref+1;
                break;

              default:
                printf("\a VOTO INVÁLIDO\n\n");
                break;   
          }  
          system("pause");
          system("cls"); 
          // volta para tela inicial de opções
          printf("-------------------------------------\n");
          printf("\t<<<< ELEIÇÕES 2021 >>>>\n");
          printf("-------------------------------------\n");
          printf("Escolha uma opção abaixo:\n");
          printf("1 - Votar\n2 - Apuração dos votos\n3 - Sair\n");
          fflush(stdin);
          scanf("%i", &opcao); 
          system("cls");
      
           // Opção 2 - executa a apuração dos votos
      } else if (opcao == 2) {
           printf("---------------------------------\n");
           printf("  <<<-- APURAÇÃO DOS VOTOS -->>>\n"); 
           printf("---------------------------------\n\n");
           // Apuração Vereador
           printf("=========== VEREADOR ==========\n");
           printf(" TOTAL DE VOTOS PARA VEREADOR: %i VOTO(S)\n", verApur);
           printf(" TOTAL DE VOTOS NULOS PARA VEREADOR: %i VOTO(S)\n\n", vNulosVer);
           printf(" JOÃO DO FRETE RECEBEU: %i VOTO(S)\n", votosJF);
           printf(" MARIA DA PAMONHA RECEBEU: %i VOTO(S)\n", votosMP);
           printf(" ZÉ DA FARMÁCIA RECEBEU: %i VOTO(S)\n\n", votosZF);
           // Apuração Prefeito
           printf("=========== PREFEITO ==========\n");
           printf(" TOTAL DE VOTOS PARA PREFEITO: %i VOTO(S)\n", prefApur);
           printf(" TOTAL DE VOTOS NULOS PARA PREFEITO: %i VOTO(S)\n\n", vNulosPref);
           printf(" DR. ZURETA RECEBEU: %i VOTO(S)\n", votosDZ);
           printf(" SENHOR GOMES RECEBEU: %i VOTO(S)\n\n", votosSG);
        
           system("pause");
           system("cls");
           // retorna para tela inicial depois da execução da opção 2
          printf("-------------------------------------\n");
          printf("\t<<<< ELEIÇÕES 2021 >>>>\n");
          printf("-------------------------------------\n");
          printf("Escolha uma opção abaixo:\n");
          printf("1 - Votar\n2 - Apuração dos votos\n3 - Sair\n");
          scanf("%i", &opcao);
          system("cls");

           // retorna para tela inicial caso a opção seja inválida
        } else if (opcao < 1 || opcao > 3) {
            printf("Opção Inválida!\n");
            system("pause");
            system("cls");
             printf("-------------------------------------\n");
             printf("\t<<<< ELEIÇÕES 2021 >>>>\n");
             printf("-------------------------------------\n");
             printf("Escolha uma opção abaixo:\n");
             printf("1 - Votar\n2 - Apuração dos votos\n3 - Sair\n");
             scanf("%i", &opcao);
             system("cls");

             // Opção 3 - encerra o programa se o usuário digitar 3
          } else if (opcao == 3) {
              printf("----------------------------------\n");
              printf("\a\t\tFIM\n"); 
              printf("---------------------------------\n\n");
              system("pause");
              system("cls");
              exit(0);

            } 

    }
        

}