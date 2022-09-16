#include <stdio.h>
//Escreva um programa que leia o raio de um cırculo e imprima seu diametro, o valor de sua circunferenciae sua  area. Use o valor de 3,14159 para ”pi”. Faça cada um destes calculos dentro da instrucoes (ou instrucoes) printf e use o especificador de convers ̃ao %f.

int main (){
  float raio;
  
  puts("Infome o tamanho do raio do circulo:");
  scanf("%f",&raio);
  printf("o diametro é de %.2f\n",2*raio);
  printf("a circuferencia é de %.2f\n",(2*raio)*3.14159);
  printf("a area é de %.2f",3.14159*(raio*raio));
  
  return 0;
}