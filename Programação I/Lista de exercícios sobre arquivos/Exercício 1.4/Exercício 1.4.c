/* Crie um programa em linguagem C que leia o arquivo seqinteiros.dat, contendo uma sequência de 20 números inteiros, e imprima na tela todos os números da sequência contida neste arquivo. */

#include <stdio.h>

int main(void) {
  
  int i, numero[20];
  FILE *arq;

  arq = fopen("seqinteiros.dat", "r");
  for (i=0; i<20; i++){
  fscanf(arq, "%d", &numero[i]);
  }
  fclose(arq);
  
  for (i=0; i<20; i++){
  printf("%d ", numero[i]);
  }
  
  return 0;
}