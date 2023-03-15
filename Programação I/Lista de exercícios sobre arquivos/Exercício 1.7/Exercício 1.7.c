/* Crie um programa em linguagem C que leia o arquivo seqinteiros.dat, contendo uma sequência de 20 números inteiros, e escreva no arquivo razaofib.dat a divisão real de um número da sequência pelo número anterior da sequência contida neste arquivo. */

#include <stdio.h>

int main(void) {
  
  int i, numero[20], razao;
  FILE *arq;

  arq = fopen("seqinteiros.dat", "r");
  for (i=0; i<20; i++){
  fscanf(arq, "%d", &numero[i]);
  }
  fclose(arq);
  
  arq = fopen("razaofib.dat", "w");
  for (i=0; i<20; i++){
    if (i==0){
    razao = numero[i] % numero[19];
    }
    else
    razao = numero[i] % numero[i-1];
    fprintf(arq, "%d ", razao);
    printf("%d ", razao);
  }
  fclose(arq);
  
  return 0;
}