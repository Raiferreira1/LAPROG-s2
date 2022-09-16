#include <stdio.h>
#include <math.h>

//Escreva um programa que receba um valor inteiro e apresente o resultado do valor lido elevado ao quadrado.

int main(){

int x;
  
  puts("digite um numero inteiro:");
  scanf("%d",&x);
  x = pow(x,2);
  printf("O quadrado do numero é de %d",x);
   return 0;
}