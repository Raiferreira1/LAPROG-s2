#include <stdio.h>

// Escreva um programa que apresente o somatorio de todos os numeros divisıveis
// por 3 pertencentes ao intervalo [0,100] e o somatorio de todos os n ́umeros
// divisıveis por 5 pertencentes ao intervalo ]100,200]. Obs.: Utilize apenas um
// la ̧co de repeticao.

int main() {
  int soma1 = 0, soma2 = 0;

  for (int i = 1; i < 200; i++) {

    if (i < 100 && i % 3 == 0)
      soma1 += i;
    else if (i >= 100 && i % 5 == 0)
      soma2 += i;
  }
  printf("Somatorio de todos os numeros divisíveis por tres [0,100] é %d\n",soma1);
   printf("Somatorio de todos os numeros divisíveis por cinco [100,200] é %d\n",soma1);
}
