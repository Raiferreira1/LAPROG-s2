#include <stdio.h>

#define TAM 3

int main(void) {
  int i, j, matriz[TAM][TAM];

  puts("informe a matriz");
  for (i = 0; i < TAM; i++) {
    for (j = 0; j < TAM; j++) {
      printf("a[%d][%d] = ", i + 1, j + 1);
      scanf("%d", &matriz[i][j]);
    }
  }

  puts("Matriz informada:");
  for (i = 0; i < TAM; i++) {
    printf("|");
    for (j = 0; j < TAM; j++) {
      printf(" %3d ", matriz[i][j]);
    }
    printf("|\n");
  }

  printf("Elementos da diagonal principal: ");
  for (i = 0; i < TAM; i++) {
    printf("%d ", matriz[i][i]);
  }
  printf("\n");
  return 0;
}
