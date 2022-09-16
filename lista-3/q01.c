#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 15
#define MX 10

// pesquisar sobre resolver bufr do sacnf
int main() {
  float vetor[15],maior,menor;
  srand(time(NULL));

  for (int i = 0; i <= TAM; i++) {
    vetor[i] = rand() % MX;
  }
  maior = vetor[0];
  menor = vetor[0];
  
  for (int i = 0; i <= TAM; i++){
    printf("%.2f\n",vetor[i]);
  }
 return  0;
}