#include <math.h>
#include <stdio.h>

int main() {
  int a, b;

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

  for (int i = a; i <= b; i++) {

    if (i % 4 == 0) {

      printf("%d\n", (int)pow(i, 2));
    }
  }

  return 0;
}