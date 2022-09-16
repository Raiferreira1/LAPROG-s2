#include <stdio.h>
#include <math.h>
//27. Escreva um programa que solicite 3 numeros em ponto flutuante e imprima a media aritmetica e geometrica. (Utilize a funçao pow(base, expoente) da biblioteca math. h).

int main(){
  float num1,num2,num3;

  puts("informe tres valores");
  scanf("%f %f %f",&num1,&num2,&num3);

  printf("a media aritmetica dos tres numeros é %.2f\n\n",(float)(num1+num2+num3)/3);

  printf("a media geometrica é %.2f",pow(num1*num2*num3,(float)1/3));
}