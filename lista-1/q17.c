#include <stdio.h>

//Escrever um programa que receba um valor inteiro do usuario e apresente o seu valor absoluto (modulo).Ñao utilize estrutura de decisao if.

int main(){
 int x ;
  
  puts("informe um valor inteiro:");
  scanf("%d",&x);
  printf("o valor absoluto de %d",(x<0) ? ~x+1:x);
  
   return 0;
}