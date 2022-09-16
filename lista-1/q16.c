#include <stdio.h>

//Desenvolva um programa que calcule o salario liquido de um professor. Para elaborar o programa,  é necessario possuir alguns dados, tais como o valor da hora aula, numero de horas trabalhadas no mes e percentual de desconto do INSS. Em primeiro lugar, deve-se estabelecer o seu salario bruto para fazero desconto e ter o valor do salario liquido. Obs.: o programa deve informar o salario bruto e salario liquido do professor.

int main (){
    float val_ha;//valor hora aula
    float val_pg;//valor pago
    short int num_ht;//horas trabalahas
    float inss;

  puts("Informe o valor da hora de aula:");
  scanf("%f",&val_ha);
  puts("Informe o total de horas trabalhadas:");
  scanf("%hi",&num_ht);
  puts("informe o percentual do inss (sem o simbolo do %)");
  scanf("%f",&inss);

    val_pg = num_ht * val_ha;
  printf("o valor bruto a receber é de %.2fR$\n",val_pg);
    
   val_pg -= val_pg*inss/100;

  printf("o valor liquido a receber é de %.2fR$\n",val_pg);
  
  return 0;
}