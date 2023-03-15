/* Crie um programa em linguagem C que leia o arquivo seqinteiros.dat, contendo uma sequência de 20 números inteiros, e escreva no arquivo diferencas.dat a diferença entre cada dois números consecutivos da sequência contida neste arquivo. */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
  int i, numero[20], diferenca;
  FILE *arq;

  arq = fopen("seqinteiros.dat", "r");
  for (i=0; i<20; i++){
  fscanf(arq, "%d", &numero[i]);
  }
  fclose(arq);
  
  arq = fopen("diferencas.dat", "w");
  for (i=0; i<20; i=i+2){
    diferenca = numero[i] - numero[i+1];
    fprintf(arq, "%d ", abs(diferenca));
    printf("%d ", abs(diferenca));
  }
  fclose(arq);
  
  return 0;
}