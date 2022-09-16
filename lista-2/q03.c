#include <stdio.h>

// Escreva um programa que leia um n ́umero inteiro e positivo F e calcule o
// fatorial deste numero

int main() {

  int num;
  int fat = 1;
  printf("Insira um valor para o qual deseja calcular seu fatorial:  ");
  scanf("%d", &num);

  if (num < 0) {
    printf("não existe fatorial de números negativos");
  } else {

    while (num > 0) {
      fat *= num--;
    }
    printf("\n\no número fatorial é %d", fat);
  }
  return 0;
}
