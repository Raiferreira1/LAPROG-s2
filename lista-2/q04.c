#include <stdio.h>

//Implementar um programa para resolver o seguinte problema: Jose tem 150 centımetros e cresce 2 centımetros por ano. O Pedro tem 110 centımetros e cresce 3 centımetros por ano. Em quantos anos Pedro sera maior que Jose?

int main (){
  
int tj = 150,tp = 110; // tamanho jose,tamanho pedro;
int ano;
  
  for(ano = 0;tj >= tp;ano++){

    tj+=2;
    tp+=3;
    
  }
   printf("Quantidade de anos que terão que passar para pedro ficar maior que jose é de %danos\n\n",ano);
  printf("Onde o tamanho de pedro sera de %dcm enquanto o de jose sera de %dcm",tp,tj);

  return  0;

}
