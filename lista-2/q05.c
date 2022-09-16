#include <stdio.h>

//Fazer um programa que receba um valor n no teclado e determine o maior e o menor termo fornecido.A condi̧c̃ao de termino do programa e quando o usu ́ario digitar zero.

int main (){
  
int n,maior,menor;

  puts("Informe um numero inteiro:");
  scanf("%i",&n);

  maior = n;
  menor = n;

  while(n != 0){
     
   if(n > maior ){  
     maior = n; 
   }else if (n < menor){
     menor = n;
   }
   puts("Digite outro numero: ( digite 0 para parar!) ");
   scanf("%i",&n);
 
  }
    printf("\nO maior termo informado foi o %d\n",maior);
    printf("O menor termo informado foi o %d",menor);
  return 0;
}