#include<stdio.h>


//Uma loja vende seus produtos no sistema entrada mais duas prestacoes, sendo a entrada maior do que ou igual `as duas prestacoes; estas devem ser iguais, inteiras e as maiores possıveis. Por exemplo, se ovalor da mercadoria for R$ 270,00, a entrada e as duas prestacoes sao iguais a R$ 90,00; se o valor damercadoria for R$ 302,75, a entrada  é de R$ 102,75 e as duas prestacoes sao iguais a R$ 100,00. Escrevaum programa que receba o valor da mercadoria e forneca o valor da entrada e das duas prestacoes, de acordo com as regras acima.

int main(){
  float entrada,mercadoria,parcelas;
  

  printf("Informe o valor da mercadoria comprada: ");
  scanf("%f",&mercadoria);

    parcelas = (int)mercadoria/3;
    entrada = mercadoria-(2*parcelas);
    
  
  printf("\nO valor necessario para dar entrada na mercadoria é de %.2f\n",entrada);
  printf("\nO valor das duas parcelas é de %.2f",parcelas);

  return 0;
}