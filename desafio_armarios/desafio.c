#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define MAX 8
#define ARMARIOS_LOTADOS 255

void mostrar_armarios(int x, unsigned char z);
int main() {

  unsigned char armario = 0;
  int menu,posicao;

  srand(time(NULL));

  do {
    mostrar_armarios(posicao, armario);

    puts("(1) Ocupar armario");
    puts("(2) Liberar armario");
    puts("(3) Sair ");
    scanf("%d",&menu);
    
   // sleep(4);
    //system("clear");
    //system("cls");

    switch (menu) {
    case 1:
      if (armario == ARMARIOS_LOTADOS)
        puts("Impossivel ococupar armario, todos os armarios ja estão cheios!");
      else {
        do {
          posicao = rand() % MAX;
        } while ((armario & (int)pow(2, posicao)) != 0);

        armario |= (int)pow(2, posicao);
        printf("\nVoce ficou com o armario de numero %d\n", posicao);
      }
      break;

    case 2:
      printf("informe o armario que deseija desocupar:");
      scanf("%d", &posicao);
      if (posicao < 0 || posicao > MAX - 1)
        printf("Posicao invalida");
      else if ((armario & (int)pow(2, posicao)) == 0)
        printf("O armario ja estar desoucupado");
      else {
        armario &= ~(int)pow(2, posicao);
        puts("Armario desocupado com sucesso");
      }
      break;

    case 3:
      puts("programa encerado");
      break;

    default:
      puts("numero invalido");
    }
  } while (menu != 3);
  return 0;
}

void mostrar_armarios(int x, unsigned char z) {

  printf("\n-------- ARMARIOS DISPONIVEIS --------\n");
  for (int i = 0; i < MAX; i++) {
    x = pow(2, i);
    printf((x & z) ? " x " : " %d ", i);
  }
  printf("\n--------------------------------------\n");
}