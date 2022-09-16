#include <stdio.h>

int main() {
  int a, b;
  printf("Informe o numero que voce deseja saber a tabuada: ");
  scanf("%d", &a);
  printf("\n");
  
  for (int i = 1; i <= 10; i++) {
    b = a * i;

    printf("%d x %d = %d\n", a, i, b);
  }

  return 0;
}