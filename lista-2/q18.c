#include<stdio.h>

//Escrever um programa que calcule e apresente o somatorio do numero de graos de trigo que se pode obter num tabuleiro de xadrez, obedecendo `a seguinte regra: colocar um grao de trigo no primeiro quadro e nos quadros seguintes o dobro do quadro anterior. Ou seja, no primeiro quadro coloca-se um grao, no segundo quadro colocam-se dois gr ̃aos (tendo neste momento trˆes gr ̃aos), no terceiro quadro colocam-se quatro gr ̃aos (tendo neste momento sete gr ̃aos), no quarto quadro colocam-se oito gr ̃aos (tendo-se ent̃ao quinze graos) ate atingir o sexagesimo quarto quadro.

int main (){
  float somatorio =0 ,inicio =1;
  
  for(int i=1;i<=64;i++){
    inicio = inicio*2;
    somatorio+=inicio;

    printf("%d valor: %.0f\n",i,inicio);

    
    
  }
     printf("somatorio = %.0f",somatorio);
    
}