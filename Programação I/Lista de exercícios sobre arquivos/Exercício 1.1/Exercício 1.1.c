/*Crie um programa em linguagem C que leia o arquivo palavra.dat, contendo uma única string, e imprima na tela a palavra contida neste arquivo.*/

#include <stdio.h>

int main(void) {
  
  int i;
  char palavra[11];
  FILE *arq;

  arq = fopen("palavra.dat", "r");
  for (i=0; i<11; i++){
  fscanf(arq, "%c", &palavra[i]);
  }
  fclose(arq);
  
  for (i=0; i<11; i++){
  printf("%c", palavra[i]);
  }
  
  return 0;
}