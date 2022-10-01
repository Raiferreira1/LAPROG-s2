#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define TAM 3
#define MAX 20
//Faca um programa em C que gere um vetor com 3 n ́umeros inteiros pseudoaleorios no intervalo[0, 19] e apresente a sua m ́edia aritm ́etica e geometrica.

int main(){
  int vet[TAM], s, p;
  float ma, mg;

  s = ma = 0;
  p = mg = 1;

  srand(time(NULL));

  for(int i = 0; i < TAM; i++){
    vet[i] = rand() % MAX;
    s += vet[i];
    p *= vet[i];
    printf("%dº valor = %d\n", i+1, vet[i]);
  }

  ma = (float)s/ TAM;
  mg = pow(p, (float)1/TAM);

  printf("Media aritmética é de %.2f\n", ma);
  printf("Media geométrica é de %.2f\n", mg);
  
  return 0;
}