/* Crie um programa em linguagem C que leia o arquivo real.dat, contendo um único número real, e imprima na tela o número contido neste arquivo. */

#include <stdio.h>

int main(void) {

  float numero;
  FILE *arq;

  arq = fopen("real.dat", "r");
  fscanf(arq, "%f", &numero);
  fclose(arq);
  
  printf("%f", numero);
  
  return 0;
}