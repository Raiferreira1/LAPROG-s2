#include <stdio.h>

// Elaborar um programa que apresente os valores de conversao de graus Celsius
// em graus Fahrenheit, de 10 em 10 graus, iniciando a contagem em dez graus
// Celsius e finalizando em cem graus Celsius. O programa deve apresentar os
// valores das duas temperaturas. Obs.: Pesquise a formula de conversao.
int main() {
  int f;

  for (int i = 10; i <= 100; i += 10) {
    f = (i * 9 / 5) + 32;
    printf("graus celsius %d° == graus fahreheit %d°\n",i,f);
  }
}