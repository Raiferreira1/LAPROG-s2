#include<stdio.h>

//Escreva um programa que leia uma temperatura em graus Celsius e apresente convertida em grausFahrenheit. A formula de versao  e F = (9 * C + 160) / 5, sendo F a temperatura Fahrenheit e C a temperatura em Celsius.
int main (){
float c,f;
  puts("infome a temperatura em graus celsius:");
  scanf("%f",&c);
    f = (9 * c + 160) / 5;
  printf("essa temperatura em graus fahrenheit é %.2f°",f);
  
 return 0;
}