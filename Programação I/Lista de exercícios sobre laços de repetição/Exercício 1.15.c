/* Crie um programa em linguagem C que imprima uma mensagem pedindo para o usuário digitar dois
números inteiros positivos, denominados N e M. O programa deve imprimir na tela uma matriz com N linha e M colunas. Todos os elementos da diagonal principal (elemento onde o índice da linha é igual ao índice da coluna, devem ser igual a 1 e todos os demais elementos devem ser iguais a zero. Após imprimir a matriz o programa deve terminar. */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int i, j, N, M, **matriz;
  
  printf("A seguir, escreva dois número N e M, respectivamente, para a composição de uma matriz (N representa o número de linhas e M as colunas).\n\nTodos os elementos da diagonal principal (elemento onde o índice da linha é igual ao índice da coluna) devem ser iguais a 1 e todos os demais elementos devem ser iguais a 0.\n\n");
  scanf("%d %d", &N, &M);

  printf("Boa escolha, Agora será gerada sua matriz %dx%d:\n\n", N, M);
  
  matriz = (int**) malloc(N * sizeof(int*));           /* alocando linhas */
  for (i=0; i<N;i++){
    matriz[i] = (int*) malloc(M * sizeof(int*));       /* alocando colunas */
    for (j=0; j<M;j++){
      if (i==j){
        matriz[i][j]=1;
        printf("%3d ", matriz[i][j]);
      }
      else{
        matriz[i][j]=0;
        printf("%3d ", matriz[i][j]);  
      }
    }
      
  printf("\n");
  }
  
    return 0;
}