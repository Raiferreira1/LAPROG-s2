#include <stdio.h>
#include <string.h>

#define  TAM 100
//Faca um programa em C que leia uma string e um caractere do usu ario e informe se a string de entrada contem o caracter fornecido.
void limpaBuffer();
  
int main (){
  char c, str[TAM],*p;

  printf("Informe Um frase: ");
  fgets(str, TAM, stdin);
  str[strcspn(str, "\n")] = '\0';
  if(strlen(str)>=TAM)
  limpaBuffer();

  printf("informe um caractere ");
  scanf("%c",&c);
  limpaBuffer();

  p = strchr(str,c);


  (p) ? puts("A string contem o caractere"):printf("string Nao contem o caractere");
   
  return 0;
}

void limpaBuffer(){
  char c;
  do{
    c = getchar();
  }while(c != '\n' && c != EOF);
}
