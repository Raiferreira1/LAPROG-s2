#include<stdio.h>

//A s ́erie de Fibonacci  ́e formada pela seguinte sequˆencia: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55... etc. Escreva um algoritmo que gere a s ́erie de Fibonacci at ́e o vig ́esimo termo.

int main (){
  
 int anterior = 0;
 int atual= 1;
 int sucessor;
  
  printf("%d ",atual);
  
  for(int i=2;i<=20;i++){

    sucessor = anterior + atual;
    anterior = atual;
    atual = sucessor;

    printf("%d ",sucessor);

  }
  return 0;
}