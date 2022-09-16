#include <stdio.h>
//Fazer um programa para ler a altura (em metros) e o sexo de uma pessoa e calcular o seu peso ideal atraves da seguinte formula: para homens: 72.7 * altura - 58 para mulheres: 62.1 * altura - 44.7

int main () {
  float alt;
  char sx;
  float ps;
  puts("informe sua alutra: (em metros)");
  scanf("%f",&alt);
  puts("qual seu sexo digite: (1) masculino ou (2) feminino");
  scanf(" %c",&sx);

  if(sx=='1'){
    ps = (72.7*alt)-58;
    printf("Seu peso ideal seria de %.2fkg",ps);
    } else if(sx=='2'){
      ps = (62.1*alt)-44;
    printf("Seu peso ideal seria de %.2fkg",ps);
    } else{
    puts("sexo nao indentificado");
  }
   return 0;
  
}