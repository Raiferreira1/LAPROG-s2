#include <stdio.h>


void converter(int x){   
 int r; 
 
 for(int i = 8; i >= 0; i--) {
    
    r = x >> i;
     if(r & 1) {
        printf("1");
     } else {
        printf("0");
     }
 }

 printf(" -> %x -> %o -> %d",x,x,x);
 printf("\n");

}



int main (){
   for(int i =1;i<=256;i++){
     converter(i);
   }
}