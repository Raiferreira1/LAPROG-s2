#include <stdio.h>

// Elabore um programa que calcule o somatorio de todos os numeros pares
// pertencentes a faixa A,B especificada pelo usuario. O programa deve funcionar
// tanto para A > B quanto para B > A.
int main() {
  int a, b, soma = 0;

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

  printf("Esses são todos os pares do intervalo ");
  
  for (int i = a; i <= b; i++) {

    if (i % 2 == 0) {
      printf("%d ", i);
      soma += i;
    }
  }
  printf("\nA soma de todos é de %d", soma);

  return 0;
}