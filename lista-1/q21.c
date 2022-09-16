#include <stdio.h>

//Escreva um programa que leia dois inteiros e entao determine e imprima se o primeiro  é multiplo do segundo. Obs.: Nao utilizar estrutura de decis ̃ao if.

int main (){
  int a,b;

  puts("infome dois numeros   inteiros a e b (ex:a b) dessa forma");
  scanf("%d %d",&a,&b);
  
  (a%b) ? printf("o primeiro Nao é multiplo do segundo\n\n"):printf("o primeiro é multiplo do segundo\n\n");

  return 0;
}