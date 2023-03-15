/* Crie um programa em linguagem C, utilizando o comando for, que imprima uma mensagem pedindo
para o usuário digitar um número inteiro. O programa deve imprimir todos os números inteiros de 1
até o número informado pelo usuário contando de 3 em 3, quando terminar de imprimir os números o
programa deve terminar. */

#include <stdio.h>

int main(void) {
  
  int x, y;

  printf("A seguir, digite um número inteiro. Após isso, o programa irá imprimir todos os números inteiros existentes a partir de 1 e contando de 3 em 3.\n");
  scanf("%d", &x);
  
  for (y=1; y<=x; y= y + 3){
    printf("%d\n", y);
  }
  printf("Pronto, todos os números foram apresentados a você.\n");
  
  return 0;
}