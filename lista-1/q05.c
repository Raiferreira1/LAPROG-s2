#include <stdio.h>
#include <assert.h>
int main(){
  
//5. Escreva um programa que pegue o valor de uma conta de restaurante e imprima o valor total a ser pago, considerando que o restaurante cobra 10% de taxa para o garcom.
  
float conta;
  
  printf("Qual o valor da conta a ser pago:");
  assert(scanf("%f", &conta) > 0);

  conta += conta*0.10;

  printf("%.2f",conta);

   return 0;
  
}