#include <stdio.h>

//25. Escreva um programa que leia um tempo em segundos e imprima quantas horas, minutos e segundos ha neste tempo.



int main() {
    int seg, h, m, s, resto;

    printf("Digite uma quantidade de segundos: ");
    scanf("%d", &seg);
    
    h = seg / 3600;
    resto = seg % 3600;
    m = resto / 60;
    s = resto % 60;
    printf("%dh %dm %ds\n", h, m, s);

    return 0;
}