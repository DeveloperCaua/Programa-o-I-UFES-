/* Crie um programa em linguagem C que leia o arquivo seqinteiros.dat, contendo uma sequência de 20 números inteiros. Crie o arquivo piramidif.dat contendo 19 linhas. Sendo que a primeira linha deve conter 19 números inteiros, onde cada número representa a diferença entre cada dois números consecutivos da sequência lida originalmente. A segunda linha deve conter 18 números inteiros, onde cada número representa a diferença entre cada dois números consecutivos da primeira linha. A terceira linha deve conter 17 números inteiros, onde cada número representa a diferença entre cada dois números consecutivos da segunda linha. E assim por diante, cada linha deve ter um número a menos que a anterior e o valor de cada número deve representar a diferença entre cada dois números consecutivos da linha anterior. A última linha do arquivo terá apenas um número. */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
  
  int i, j, k, numero[20], diferenca, difTemp[20];
  FILE *arq;

  arq = fopen("seqinteiros.dat", "r");
  for (i=0; i<20; i++){
  fscanf(arq, "%d", &numero[i]);
  }
  fclose(arq);

  arq = fopen("piramidif.dat", "w");
  for (i=0; i<19; i++){
      difTemp[i] = numero[i] - numero[i+1];
      fprintf(arq, "%d ", abs(difTemp[i]));
      printf("%d ", abs(difTemp[i]));
    }
  
  printf("\n");
  fprintf(arq, "\n");
  
  k=18;
  for (j=0; j<18; j++){
    for (i=0; i<k; i++){
      if (difTemp[i] > difTemp[i+1]){
      diferenca = difTemp[i] - difTemp[i+1];
      }
      else
        diferenca = difTemp[i+1] - difTemp[i];
      
      fprintf(arq, "%d ", abs(diferenca));
      printf("%d ", abs(diferenca));
      difTemp[i] = diferenca;
    }
    k=k-1;
    fprintf(arq, "\n");
    printf("\n");
  }
  fclose(arq);
  
  return 0;
}