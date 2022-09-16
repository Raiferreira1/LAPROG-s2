#include <stdio.h>

//Elabore um programa que apresente a quantidade de numeros divisıveis por 3 pertencentes a faixa A,B especificada pelo usuario. O programa deve funcionar tanto para A > B quanto para B > A.

int main() {
  int a, b, qtd = 0;

  printf("Informe o valor de A: ");
  scanf("%d", &a);
  printf("Informe o valor de B: ");
  scanf("%d", &b);
  printf("\n");

  if (a > b) {
    a ^= b;
    b ^= a;
    a ^= b;
  }

  printf("A quantidade de  multiplos de três do intervalo é ");

  for (int i = a; i <= b; i++) {

    if (i % 3 == 0)   qtd++;  
  }
  printf("%d ", qtd);

  return 0;
}
