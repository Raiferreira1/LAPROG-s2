#include <stdio.h>

//

int main() {
  int a, b, ir=0;

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
    ir += i;

  }
  printf("%.2f",(float)ir/(b-a+1));
}