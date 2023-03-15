/* Crie um programa em linguagem C que leia o arquivo seqinteiros.dat, contendo uma sequência de 20 números inteiros, e imprima na tela o 1, 4, 9, 13, 19 números contidos neste arquivo. */ 

#include <stdio.h>

int main(void) {
  
  int i, numero[20];
  FILE *arq;

  arq = fopen("seqinteiros.dat", "r");
  for (i=0; i<20; i++){
  fscanf(arq, "%d", &numero[i]);
  }
  fclose(arq);
  
  printf("%d %d %d %d %d", numero[0], numero[3], numero[8], numero[12], numero[18]);
  
  return 0;
}