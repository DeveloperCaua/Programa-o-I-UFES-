/* Crie um programa em linguagem C que receba um número inteiro e imprima na tela se ele é múltiplo
de 7 ou não. */

#include <stdio.h>

int main(void) {
  int número, resultado;
  printf("A seguir, digite um número. Caso ele seja múltiplo de 7, será informado na tela.\n");
  scanf("%d", &número);
  if (número%7==0)
    printf("Seu número é múltiplo de 7.");
  else
    printf("seu número não é múltiplo de 7.");
  return 0;
}