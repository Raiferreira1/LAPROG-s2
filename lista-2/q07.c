#include <stdio.h>

// Para que a divis ̃ao entre 2 numeros possa ser realizada, o divisor n ̃ao pode
// ser nulo (zero). Escrevaum programa para ler 2 valores e imprimir o resultado
// da divis ̃ao do primeiro pelo segundo. OBS: Oprograma deve validar a leitura do
// segundo valor (que n ̃ao deve ser nulo). Enquanto for fornecido umvalor nulo a
// leitura deve ser repetida.
int main (){
float num1,num2;
  
 
  printf("Informe  um valor: ");
  scanf("%f",&num1);
  
  do { 
  printf("informe um seugundo valor: ");
  scanf("%f",&num2);

 if(num2 == 0) 
    puts("\nSegundo valor nao é valido tente novamente\n");
    
  }while(num2 == 0 );
   printf("\nO resutado da divisão do primeiro pelo o segundo numero é de %.2f",num1/num2);
}