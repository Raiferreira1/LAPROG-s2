
#include <stdio.h>

//Escreva um programa que receba a entrada de um numero de tres dıgitos, separe o n umero em seus dıgitos componentes e reconstrua um numero com os componentes na ordem inversa. Exemplo: para entrada de 123, a resposta do programa seria 321.

int main(){
  int num,resto;
  puts
    ("digite um numero inteiro:");
  scanf("%d",&num);
  
  if(num >= 0){
    do{
      resto = num % 10;
      printf("%d",resto);
      num /= 10;
    }while(num != 0);
    
  }else if(num < 0){
    num *= -1;
      printf("-");
        
    do{
      resto = num % 10;
      printf("%d",resto);
      num /= 10;
    }while(num != 0);

    return 0;
  }
  
}