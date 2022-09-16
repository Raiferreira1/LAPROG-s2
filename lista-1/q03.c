#include <stdio.h>

//2. Fa ̧ca um programa que leia um valor inteiro decimal X e escreva, na tela, este mesmo valor nas bases hexadecimal e octal.Ex.: Entre com o valor: 10 Hexadecimal: A Octal: 12

int main(void) {
  
int x;
  
  printf("informe o valor de x ");
  scanf("%d",&x);
  
  printf("o valor de x em decimal é de %d\n",x);
  printf("o valor de x em octal é de %o\n",x);
  printf("o valor de x em hex é de %x\n",x);
  
   return 0;
}