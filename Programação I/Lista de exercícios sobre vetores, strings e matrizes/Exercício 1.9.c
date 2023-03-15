/* Crie um programa em linguagem C que imprima uma mensagem pedindo para o usuário digitar 15 números inteiros. Após receber os números, o programa deve armazená-los numa matriz de 3x5 posições. Ao final, o programa deve imprimir na tela a matriz com 3 linhas e 5 colunas contendo os valores digitados pelo usuário. A ordem de preenchimento das posições da matriz deve ser a sequinte:

1  2  3  4  5
6  7  8  9  10
11 12 13 14 15

*/

#include <stdio.h>

int main(void) {
  
  int i, j, k, l, matriz[3][5];
  
  printf("Digite quinze números inteiros para compor uma matriz 3x5.\n");
  
  for (i=0; i<3;i++){
    for (j=0; j<5;j++)
      scanf("%d", &matriz[i][j]);
  }

  printf("Aqui está sua matriz 3x5:\n");
  
  for (k=0; k<3; k++){
    for (l=0; l<5; l++)
      printf("%4d ", matriz[k][l]);
    printf("\n");
  }
  
  return 0;
}