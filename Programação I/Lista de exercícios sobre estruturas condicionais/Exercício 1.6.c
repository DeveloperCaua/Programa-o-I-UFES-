/* Crie um programa em linguagem C que receba um número inteiro e imprima na tela se ele é par ou
ímpar. */

#include <stdio.h>

int main(void) {
  int número, resultado;
  printf("A seguir, digite um número qualquer para ser verificado se ele é par ou ímpar\n");
  scanf("%d", &número);
  if (número%2==0)
    printf("Seu número é par");
  else
    printf("Seu número é ímpar");
  return 0;
}