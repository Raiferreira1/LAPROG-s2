#include <stdio.h>

// Construir um programa que apresente como resultado o fatorial dos valores
// ́ımpares situados na faixa n ́umero de 1 a 10.

int main() {

  int n;

  for (int i = 1; i <= 10; i++) {
    int f = 1;
    if (i % 2 != 0) {
      n = i;

      while (n > 0) {
        f *= n--;
      }
      printf("O fatorial %d de E %d\n", i, f);
    }
  }
}