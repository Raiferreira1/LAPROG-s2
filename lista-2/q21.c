#include <math.h>
#include <stdio.h>

int main() {

  int numero,aux, resto, inverso = 0;

  printf("Informe um numero de cinco digitos :");
  scanf("%d", &numero);

   aux=numero;
 
  for (int i = 4; i >= 0; i--) {
    resto = numero % 10;
    inverso += resto * pow(10, i);
    numero = numero / 10;
  }
   (inverso==aux) ? printf("%d é palindromo",aux):printf("%d Não é palidromo",aux);
  
}