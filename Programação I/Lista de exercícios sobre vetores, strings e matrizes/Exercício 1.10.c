/* 1.10. Crie um programa em linguagem C que imprima uma mensagem pedindo para o usuário digitar 9 números inteiros. Após receber os números, o programa deve armazená-los numa matriz de 3x3 posições. Ao final, o programa deve imprimir na tela a soma dos elementos da diagonal principal (1, 5,9). A ordem de preenchimento das posições da matriz deve ser a sequinte:

1  2  3  
4  5  6
7  8  9    */

#include <stdio.h>

int main(void) {
  
  int i, j, k, l, m, soma, matriz[3][3];
  soma=0;
  
  printf("Digite nove números inteiros para compor uma matriz 3x3.\n");
  
  for (i=0; i<3;i++){
    for (j=0; j<3;j++)
    scanf("%d", &matriz[i][j]);
  }

  printf("Aqui está sua matriz 3x3:\n");
  
  for (k=0; k<3; k++){
    for (l=0; l<3; l++)
      printf("%4d ", matriz[k][l]);
    printf("\n");
  }

  for (m=0; m<3; m++){
    soma = soma + matriz[m][m];
  }
  
  printf("A soma dos elementos da diagonal principal é igual a: %d.\n", soma);
  
  return 0;
}