/* Crie um programa em linguagem C que leia o arquivo inteiro.dat, contendo um único número inteiro, e imprima na tela o número contido neste arquivo. */

#include <stdio.h>

int main(void) {

  int numero;
  FILE *arq;

  arq = fopen("inteiro.dat", "r");
  fscanf(arq, "%d", &numero);
  fclose(arq);
  
  printf("%d", numero);
  
  return 0;
}