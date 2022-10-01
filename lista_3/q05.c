#include <stdio.h>
#include <string.h>

#define TAM 100
// Faca um programa em C que concatene duas strings recebidas pelo usuario.
// Construa uma versao com uso da fun ̧c ̃ao strcat() e outra sem.

void limpabuffer();

int main() {

  char str[TAM], str2[TAM],str3[TAM],str4[TAM];
  int i = 0,j = 0;

  printf("Informe Um frase: ");
  fgets(str, TAM, stdin);
  str[strcspn(str, "\n")] = '\0';
  if (strlen(str) >= TAM)
    limpabuffer();

  printf("\nInforme Uma segunda frase: ");
  fgets(str2, TAM, stdin);
  str2[strcspn(str2, "\n")] = '\0';
  if (strlen(str2) >= TAM)
    limpabuffer();

  printf("Frase 1° => %s\n", str);
  printf("Frase 2° => %s\n", str2);

  puts("string cancatenada com (strcat)");
  strcat(str3, str);
  strcat(str3, str2);
  printf("%s\n", str3);

  puts("-----------------------------------------------------------------------"
       "---\n");

  puts("verificando sem (sttcmp)");
  while(str[i] != '\0'){
    str4[i] = str[i];
    i++;
  }
  while(str2[j] != '\0'){
    str4[i+j] = str2[j];
    j++;
  }
   printf("%s\n", str4);

  
  return 0;
}

void limpabuffer() {
  char c;
  do {
    c = getchar();
  } while (c != '\n' && c != EOF);
}