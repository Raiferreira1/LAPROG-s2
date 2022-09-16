#include <stdio.h>
#include <math.h>

// Elabore um programa que apresente os quadrados dos n ́umeros inteiros m
// ́ultiplos de 4 existentes na faixa de valores de 15 a 90.

int main() {

  for (int i = 15; i <= 90; i++) {

    if (i % 4 == 0){
      //printf("%d ",i);
      printf("%d\n",(int)pow(i,2));
    }
  }

  return 0;
}