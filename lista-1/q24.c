#include <stdio.h>
#include <assert.h>

//Escreva um programa que calcule o produto entre um valor dado x por 2 elevado a um valor dado n.Obs.: Utilize operadores bin ́arios.

int main(void) {
 int x;
 int n;
 int f = 1;
 
  
  printf("informe o valor de x: ");
  assert(scanf("%d", &x) > 0);
  printf("informe o valor do expoente n:");
  assert(scanf("%d", &n) > 0);

  f = x * f << n;

  printf("O valor em f é de %d\n",f);
} 