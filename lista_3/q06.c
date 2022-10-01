#include <stdio.h>
#include <string.h>

#define TAM 10

void limpabuffer();

int main (){

  char str[TAM],str2[TAM];
  int t;
  
  printf("Informe Um frase: ");
  fgets(str, TAM, stdin);
  str[strcspn(str, "\n")] = '\0';
  if(strlen(str)>=TAM)
  limpabuffer();

  t = strlen(str)-1;
  //printf("%d",t);
  int i = 0;

  while(t >= 0){
    str2[i] =str[t];
    t--;
    i++;
  }
   str2[i+1] = '\0';
  
  printf("Frase 2° => %s\n", str2);


   return 0; 
}


void limpabuffer(){
  char c;
  do{
    c = getchar();
  }while(c != '\n' && c != EOF);
}
