#include <stdio.h>
#include <string.h>

#define TAM 30


int main () {
  //Faca um programa em C que leia uma string do usuario e informe a quantidade de caracteres da string fornecida. Nao use a fun ̧c ̃ao strlen().

  char str[TAM];
  int i = 0;

  printf("Informe Um frase: ");
  fgets(str, TAM, stdin);
  str[strcspn(str, "\n")] = '\0';
  

  
  while(str[i] != '\0')
  i++;

  
  printf("O tamanho da string é de %d",i);

  
}