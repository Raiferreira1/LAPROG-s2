#include <stdio.h>
#include <string.h>

#define TAM 30
//4. Faca um programa em C que leia duas strings do usu ́ario e informe se elas sao iguais. Faca umaversao com o uso da fun ̧cao strcmp() e outra sem.

void limpabuffer();

int main (){

  char str[TAM],str2[TAM];
  
  printf("Informe Um frase: ");
  fgets(str, TAM, stdin);
  str[strcspn(str, "\n")] = '\0';
  if(strlen(str)>=TAM)
  limpabuffer();


  printf("\nInforme Uma segunda frase: ");
  fgets(str2, TAM, stdin);
  str2[strcspn(str2, "\n")] = '\0';
  if(strlen(str2)>=TAM)
  limpabuffer();

   printf("Frase 1° => %s\n", str);
   printf("Frase 2° => %s\n", str2);


  

  puts("Verificando se as frases são iguais com (strcmp)");
  (strcmp(str, str2) ) ? puts("\nFrases diferente\n") : puts("\n\nFrases iguais\n");

  puts("--------------------------------------------------------------------------\n");

  puts("verificando sem (sttcmp)");


  int i = 0;
  
  while(str[i] == str2[i] && str[i] != '\0' && str2[i] != '\0'){
    i++;
    }
      if(str[i] == '\0' && str2[i] == '\0'){
       puts("Frases iguais");
        }else{
       puts("Frases diferentes");
        }
   return 0; 
}


void limpabuffer(){
  char c;
  do{
    c = getchar();
  }while(c != '\n' && c != EOF);
}
