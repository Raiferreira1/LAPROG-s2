#include<stdio.h>

//Escreva um programa que leia duas vari aveis A e B e efetue a troca dos valores. O objetivo  ́e que a variavel A passe a conter o valor de B e a vari ́avel B passe a possuir o valor de A. Apresente os valoresap ́os a efetiva ̧cao do processamento da troca.

int main(void) {
  
char A = 10;
char B = 7;

printf("%d %d\n",A,B);

A^=B;  
B^=A;
A^=B;
  
printf("%d %d\n",A,B);
  
  return 0;
  }