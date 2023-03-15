#include <stdio.h>

int main(void) {
  
  int i, j, k, l;
  float matriz1[3][3], matriz2[3][3], multiplicacao, resultado;
  
  printf("A seguir, digite 9 números reais para compor uma matriz 3x3. Os números seguirão a ordem: \n\n1.00   2.00   3.00\n4.00   5.00   6.00\n7.00   8.00   9.00\n\n");
  
  for (i=0; i<3;i++){
    for (j=0; j<3;j++)
    scanf("%f", &matriz1[i][j]);
  }

  printf("\nAqui está sua primeira matriz 3x3:\n\n");
  
  for (i=0; i<3; i++){
    for (j=0; j<3;j++)
      printf("%8.2f ", matriz1[i][j]);
    printf("\n");
  }

  printf("\n\nAgora digite os números reais que irão compor sua segunda matriz 3x3:\n\n");
  
  for (i=0; i<3;i++){
    for (j=0; j<3;j++)
    scanf("%f", &matriz2[i][j]);
  }

  printf("\n\nAqui está sua segunda matriz 3x3:\n\n");
  
  for (i=0; i<3; i++){
    for (j=0; j<3;j++)
      printf("%8.2f ", matriz2[i][j]);
    printf("\n");
  }

printf("\nA matriz que é o resultado da multiplicação das duas matrizes recebidas é igual a:\n\n");

  for (j=0; j<3; j++){
    for (k=0; k<3; k++){
      resultado = 0;
      for (l=0; l<3; l++){
        multiplicacao = (matriz1[j][l] * matriz2 [l][k]);
        resultado = resultado + multiplicacao;
      }
      printf("%8.2f ", resultado); 
    }
   printf("\n");
  }
  
  return 0;
}