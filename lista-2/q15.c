#include <math.h>
#include <stdio.h>
#define BASE 3

// Elaborar um programa que apresente os resultados das potencias do valor de
// base 3, elevado a um expoente que varie do valor 0 a 7.

int main() {
  for (int i = 1; i <= 7; i++) {
    printf("%d\n",(int)pow(BASE,i));
  }
}