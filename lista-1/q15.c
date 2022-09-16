#include<stdio.h>

//Uma empresa contrata um vendedor a R$ 50,25 por dia. Crie um programa que solicite o numero de dias trabalhados pelo vendedor e imprima o valor lıquido a ser pago ao mesmo, sabendo que se ele trabalhou ate 10 dias nao tem direito a gratifica ̧c ̃ao, se ele trabalhou acima de 10 dias e at ́e 20 dias tem direito a gratificacao de 20%, se ele trabalhou acima de 20 dias tem direito a gratifica ̧cao de 30%. Sempre s ̃ao descontados 10% de imposto de renda em cima do valor bruto.

int main(){
  short int d; //dias
  float grat = 50.25;
  float resl; //valor a receber
  
  puts("qual foi o numero de dias trabalahdos pelo vendedor:");
  scanf("%hi",&d);
  
 if(d <= 10){
   resl = 50.25 * d;
   resl -=  resl * 0.10;// resl-resl*0.10
   printf("o seu valor liquido a receber é de %.2f",resl);
   
 }else if(d > 10 && d <= 20){
   resl = 50.25* d;
   grat = resl*0.20;
   resl -=  resl * 0.10;
   resl += grat;
   printf("o seu valor liquido a receber é de %.2f",resl);
 }else{
   resl = 50.25* d;
   grat = resl*0.30;
   resl -=  resl * 0.10;
   resl += grat;
   printf("o seu valor liquido a receber é de %.2f",resl);
 }


   return 0;
}
