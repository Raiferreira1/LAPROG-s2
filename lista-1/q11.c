#include<stdio.h>

//Elabore um programa que apresente o valor da conversao em dolar de um valor lido em real. programa deve solicitar o valor da cotacao do dolar e tambem a quantidade de reais que o usu ́ario deseja converter.
int main (){
  
  float c;//cotaçao do dolar 
  float vlr;// valor de reais
  
  puts("Informe o valor em reais que deseija converter para dolar:");
  scanf("%f",&vlr);
  puts("informe o valor atual da cotaçao do dolar:");
  scanf("%f",&c);
  
  printf("o valor infomado em dolar é de %2.f",vlr/c);

   return 0;
}