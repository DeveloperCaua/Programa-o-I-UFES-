#include <stdio.h>

int main(void) {

  int numeros[200], numeros2[10], i, j, k, l, soma;
  FILE *arq;
  
  arq = fopen("2022200212.dat", "r");
  for (i=0; i<200; i++){
  fscanf(arq, "%d", &numeros[i]);
  }
  fclose(arq);

  k=0;
  for (j=0; j<10; j++){
  numeros2[j] = numeros[0+k];
  k = k + 4;
  printf("%5d ", numeros2[j]);
  }
printf("\n");

  l=9;
  for (j=0; j<9; j++){
    for (i=0; i<l; i++){
      soma = numeros2[i] + numeros2[i+1];
      printf("%5d ", soma);
      numeros2[i] = soma;
    }
    l = l - 1;
    printf("\n");
  }
  
  return 0;
}