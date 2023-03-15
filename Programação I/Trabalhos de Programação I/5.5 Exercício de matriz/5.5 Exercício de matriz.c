/* Leia do teclado duas matrizes 3 x 3 de números inteiros e escreva na tela uma terceira matriz com os maiores dos valores de cada posição das matrizes lidas.  Cauã Enrico Beling S.I 2022-2  */

#include <stdio.h>

int main(void) {
  
  int i, j, matriz_1[3][3], matriz_2[3][3], matriz_resultante[3][3];
  
  printf("A seguir, digite nove números para compor sua primeira matriz 3x3. Os números seguirão a ordem: \n\n1 2 3\n4 5 6\n7 8 9\n\n");
  
  for (i=0; i<3;i++){
    for (j=0; j<3;j++)
    scanf("%d", &matriz_1[i][j]);
  }

  printf("\nPrimeira matriz conclúida.\nEssa é sua matriz n°1:\n\n");

  for (i=0; i<3; i++){
    for (j=0; j<3;j++)
      printf("%4d ", matriz_1[i][j]);
    printf("\n");
  }
  
    printf("\n\nAgora digite os próximos nove valores que irão compor sua segunda matriz 3x3:\n\n");
  
  for (i=0; i<3;i++){
    for (j=0; j<3;j++)
    scanf("%d", &matriz_2[i][j]);
  }

  printf("\nSegunda matriz conclúida.\nEssa é sua matriz n°2:\n\n");

  for (i=0; i<3; i++){
    for (j=0; j<3;j++)
      printf("%4d ", matriz_2[i][j]);
    printf("\n");
  }

  printf("\n\nAgora será gerado uma nova matriz 3x3, com o maior valor de cada posição das matrizes anteriores.\n\n");

  for (i=0; i<3;i++){
    for (j=0; j<3;j++)
      if (matriz_1[i][j] >= matriz_2[i][j]){
        matriz_resultante[i][j] = matriz_1 [i][j];
      }
      else 
        matriz_resultante[i][j] = matriz_2 [i][j];
  }

  for (i=0; i<3; i++){
    for (j=0; j<3;j++)
      printf("%4d ", matriz_resultante[i][j]);
    printf("\n");
  }

  return 0;
}