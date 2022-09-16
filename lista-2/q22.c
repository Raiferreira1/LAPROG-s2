#include <stdio.h>


int main (){
  
  int n,resto,setes=0;

  printf("informe um numero inteiro ");
  scanf("%d",&n);
  while(n>0){
    resto = n%10;
    n=n/10;
    
    if(resto==7)
      setes+=1;
  }
  printf("%d",setes);
}