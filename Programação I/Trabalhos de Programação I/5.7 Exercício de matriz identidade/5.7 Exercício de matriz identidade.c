#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int i, j, N, **matriz;
  
  printf("A seguir, digite um número inteiro positivo que represente a ordem de uma matriz identidade n. a matriz será preenchida com os valores de uma matriz identidade I(n).\n\n");
  scanf("%d", &N);

  printf("\nBoa escolha, Agora será gerada sua matriz identidade de acordo com o valor fornecido.\n\nAqui está sua matriz identidade I(%d):\n\n", N);

  matriz = (int**) malloc(N * sizeof(int*));
  for (i=0; i<N;i++){
    printf("|");
    matriz[i] = (int*) malloc(N * sizeof(int*));
    for (j=0; j<N;j++){
      if (i==j){
        matriz[i][j]=1;
        printf("%3d ", matriz[i][j]);
      }
      else{
        matriz[i][j]=0;
        printf("%3d ", matriz[i][j]);  
      }
    }
      
  printf(" |\n");
  }
  
    return 0;
}