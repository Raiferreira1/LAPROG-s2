#include <stdio.h>
#include <math.h>
#include <assert.h>

//4. Sabendo que os argumentos da funcao ”printf”podem ser expressoes (a+b, a/b, a*b...), e nao somente argumentos, faca um programa capaz de ler um valor inteiro X e escrever seu triplo, seu quadrado, e seu meio.


int main (){
  int x; 
  
  puts("Informe um valor:");
  assert(scanf("%d", &x) > 0);
  printf("O tliplo do numero informado é de %d\n",3*x);
  printf("O seu é  quadado é de %d\n",(int)pow(x,2));
  printf("O meio desse numero é de %d",x/2);
  
   return 0;
  
}