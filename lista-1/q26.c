#include <stdio.h>
#include <math.h>

//Fazer um programa para ler as coordenadas x e y de dois pontos e calcular a distancia entre os dois pontos no plano. (Utilize a funcao sqrt (numero), biblioteca math.h).
int main(){
  
  int x1,y1,x2,y2;
  float d;

  puts("informe a primeira cordenada: (ex: x,y)");
  scanf("%d,%d",&x1,&y1);
  
  puts("informe a segunda cordenada: (ex: x,y)");
  scanf("%d,%d",&x2,&y2);

  d =  sqrt(pow(x2-x1,2)+pow(y2-y1,2));

  

  printf(" a distacia entre os dois pontos é de %.2f",d);

  return 0;
}