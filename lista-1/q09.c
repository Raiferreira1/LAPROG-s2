#include <stdio.h>

//Escreva um programa que leia um valor numerico inteiro e apresente como resultado os seus valores sucessor e antecessor.

int main (){
  int x ;
   puts("digite um numero inteiro:");
   scanf("%d",&x);
   printf("\nO valor de x é %d seu sucessor é %d e seu antecessor é %d",x ,x+1,x-1);
  
   return 0;
}