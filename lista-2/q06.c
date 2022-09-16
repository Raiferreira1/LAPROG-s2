#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define NUMERO_PAULO 5
#define NUMERO_RENATA 7
#define NUMERO_BRANCO 0

// Escreva um programa que transforme o computador numa urna eletronica para
// eleicao para presidente de um certo paıs, as quais concorrem os candidatos
// 5-Paulo e 7-Renata. Cada voto deve ser dado pelo numero do candidato,
// permitindo-se ainda o voto 0 para voto em branco. Qualquer voto diferente dos
// ja citados  é considerado nulo; em qualquer situacao, o eleitor deve ser
// consultado quanto `a confirmacao do seu voto. No final da eleicao o programa
// deve emitir um relatorio contendo as porcentagens de votac̃ao de cada
// candidato, votos em branco, votos nulos e o candidato eleito. Obs.: O codigo
// para finalizar a urna (vota ̧cao)  ́e o usu ́ario digitar algum n ́umero negativo.

int main() {
  int voto, paulo , renata, total_votos, branco, nulo;
  char confirma;

  paulo = renata = nulo = branco = total_votos = 0;
  
 while (voto >= 0) {

  // cabeçalho
  puts(" ____________________________");
  puts("|////////////////////////////|");
  puts("|------*ELEIÇOES 2022*-------|");
  puts("|////////////////////////////|");
  puts("\\\\__________________________//");
  puts("\n");
  puts("...............................");
  puts("......LISTA DE CANDIDATOS......");
  puts("...............................");
  puts("5 - PAULO");
  puts("7 - RENATA");
  puts("\n");

 
    printf("\nInforme seu voto: ");
    scanf("%d", &voto);

   if(voto <0 )
     continue;
   
     
   
    puts("\nDigite S para (Sim) e N para (Não)");
    printf("Comfirme seu voto: ");
    scanf(" %c", &confirma);
    confirma = toupper(confirma);

    if (confirma != 'S') {

      puts("Voce não confirmou seu voto tente novamente");
      continue;

    } else {
      puts("Seu voto foi computado obrigado por votar");
      sleep(4);
      system("clear");
      system("cls");

      total_votos += 1;

      // contabiliza votos
    }
    if (voto == NUMERO_PAULO) paulo += 1;

    else if (voto == NUMERO_RENATA) renata += 1;

    else if (voto == NUMERO_BRANCO) branco += 1;

    else nulo += 1;
  }
    printf("Total de votos na eleiçao foi de %d votos\n",total_votos);
    printf("Renata recebeu %.2f%%\n",(float)renata/total_votos*100);
    printf("Paulo recebeu %.2f%%\n",(float)paulo/total_votos*100);
    printf("Total de votos brancos foi de %.2f%%\n",(float)branco/total_votos*100);
    printf("Total de votos nulos %.2f%%\n",(float)nulo/total_votos*100);
}