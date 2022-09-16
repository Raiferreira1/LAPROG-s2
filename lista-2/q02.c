#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


//Refaca o programa da Quest ao 1, utilizando a estrutura de repeticao com teste no final.

void limpar (char c) {
  while((c = getchar()) != '\n' && c != EOF);
}

int main (){
  
  char dia_sem;
  
  do{
    puts("Selecione o dia da semana:");
    puts("(1) Domingo");
    puts("(2) Segunda-feira");
    puts("(3) Terça-feira");
    puts("(4) Qurta-feira");
    puts("(5) Quinta-feira");
    puts("(6) Sexta-feira");
    puts("(7) Sabado");
    dia_sem = getchar();
    limpar(dia_sem);
  switch(dia_sem){

    case '0': assert( system("clear") ==0); puts("\nPrograma finalizado\n"); break;
    case '1': assert( system("clear") ==0); puts("\nDomingo\n"); break;
    case '2': assert( system("clear") ==0); puts("\nSegunda\n"); break;
    case '3': assert( system("clear") ==0); puts("\nterça\n"); break;
    case '4': assert( system("clear") ==0); puts("\nquarta\n"); break;
    case '5': assert( system("clear") ==0); puts("\nquinta\n"); break;
    case '6': assert( system("clear") ==0); puts("\nsexta\n"); break;
    case '7': assert( system("clear") ==0); puts("\nsabado\n"); break;
    default : assert( system("clear") ==0); puts("\nPrograma finalizado\n"); 
    }
  
  }while(dia_sem!='0');
  
}