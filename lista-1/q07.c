#include <stdio.h>

//7. Faca um programa que leia uma quantidade de horas, minutos e segundos e imprima o total de segundos.

int main (){
  
int horas;
int minutos;
int segundos;
  
  puts("Informe a quantidade de horas:");
  scanf("%d",&horas);
  puts("Informe a quantidade de minutos:");
  scanf("%d",&minutos);
  puts("Informe a quantidade de segundos:");
  scanf("%d",&segundos);

  printf("o total de segundos é de %d",(horas*3600)+(60*minutos)+segundos);
   return 0;
}