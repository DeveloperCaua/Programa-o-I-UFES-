#include <stdio.h>

int main(void) {
  
  int i, j, k, l, matriz1[3][3], matriz2[3][3],soma[3];
  
  printf("A seguir, digite 9 números para compor uma matriz 3x3. Os números seguirão a ordem: \n\n1 2 3\n4 5 6\n7 8 9\n\n");
  
  for (i=0; i<3;i++){
    for (j=0; j<3;j++)
    scanf("%d", &matriz1[i][j]);
  }

  printf("\nAqui está sua primeira matriz 3x3:\n\n");
  
  for (i=0; i<3; i++){
    for (j=0; j<3;j++)
      printf("%4d ", matriz1[i][j]);
    printf("\n");
  }

  printf("\n\nAgora digite os valores da sua segunda matriz 3x3:\n\n");
  
  for (i=0; i<3;i++){
    for (j=0; j<3;j++)
    scanf("%d", &matriz2[i][j]);
  }

  printf("\n\nAqui está sua segunda matriz 3x3:\n\n");
  
  for (i=0; i<3; i++){
    for (j=0; j<3;j++)
      printf("%4d ", matriz2[i][j]);
    printf("\n");
  }

printf("\nA matriz que é o resultado da soma das duas matrizes recebidas é igual a:\n\n");
  
  for (k=0; k<3; k++){
    for (l=0; l<3; l++){
      soma[k] =  matriz1[k][l] + matriz2[k][l];
      printf("%4d", soma[k]);
    }
    printf("\n");
  }  
  
  return 0;
}