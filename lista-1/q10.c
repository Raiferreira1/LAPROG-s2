#include <stdio.h>

//Escreva um programa que calcule e apresente o valor do volume de um caixa retangular utilizando a f́ormula VOLUME = COMPRIMENTO * LARGURA * ALTURA.

int main (){
  int v,a,l,c;//volume,altura,largra,comprimento

  puts("informe a altura da caixa em :");
  scanf("%d",&a);
  puts("infome a largura da caixa em :");
  scanf("%d",&l);
  puts("informe o comprimento da caixa :");
  scanf("%d",&c);

  v = c*l*a;

  printf("o tamanho do volume da caixa é de %dcm",v);
  
   return 0;
  
  }
