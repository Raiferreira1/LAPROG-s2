#include <stdio.h>
//Escreva um programa que peça ao usuario para digitar dois numeros, obtenhaos do usuario e imprima a soma, o produto, a diferenca, o quociente e o resto da divisao dos dois numeros.
int main(){
 int num1,num2;
 
  puts("digite dois numeros ex: (12 13)");
  scanf("%d %d",&num1,&num2);
  printf("a soma dos dois numeros é de %d\n",num1+num2);
  printf("o produto entre os dois numeros é de %d\n",num1*num2);
  printf("o quociente da divisao dos dois numeros é %d",num1/num2);
  printf(" e o resto dessa divisao é %d",num1%num2);
  
   return 0;
}