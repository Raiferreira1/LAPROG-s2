#include<stdio.h>

//A linguagem C pode representar letras maiusculas, letras minusculas e uma grande variedade de sımbolos especiais. O C usa internamente pequenos inteiros para representar cada caractere diferente. O conjunto de caracteres que um computador utiliza e as representa ̧c ̃oes dos n ́umeros inteiros correspondentes aqueles caracteres  ́e chamado conjunto de caracteres do computador. Vocˆe pode imprimir o numero inteiro equivalente a letra maiuscula A, por exemplo, executando a instrucao  printf(”%d”, ’A’);

//Escreva um programa em C que imprima os inteiros equivalentes a algumas letras mai ́usculas, letras minusculas e s ́ımbolos especiais. No mınimo, determine os numeros inteiros equivalentes ao conjuntoseguinte: ABCabc 0 12 $ * + / e o caractere espaco em branco.
int main(){
  
puts("o conjunto de inteiros referente ao conjunto de caracteres\n {A,B,C,a,b,c,0,1,2,$,*,+,espaço em branco}\n");
  
printf("é {%d %d %d %d %d %d %d %d %d %d %d %d %d %d}",'A','B','C','a','b','c','0','1','2','$','*','+','/',' ');
} 