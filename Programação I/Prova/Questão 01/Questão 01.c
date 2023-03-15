#include <stdio.h>

int main(void) {
  int codigo[200], decodificacao[200], i, l;
  FILE *arq;
  char K[10]={'2', '0', '2', '2', '2', '0', '0', '2', '1', '2'};

  printf("\n| Bem-vindo ao Sistema de Codificação e Decodificação do Cauã (SCDC) |\n\nO arquivo decodificado é:\n\n ");

  arq = fopen("2022200212.dat", "r");
  for (i=0; i<200; i++){
  fscanf(arq, "%d", &codigo[i]);
  }
  fclose(arq);
       
  l = 0;
  for(i=0; i<200; i++){
    decodificacao[i] = codigo[i] ^ K[l];
    l = l+1;
          
    if (l%10 == 0){
    l=0;
    }
          
    printf("%c", decodificacao[i]);
  }

  return 0;
}