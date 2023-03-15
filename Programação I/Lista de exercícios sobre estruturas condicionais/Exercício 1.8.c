/* Crie um programa em linguagem C que receba dois números inteiros e imprima na tela qual é o maior
deles. */

#include <stdio.h>

int main(void) {
  int a, b;
  printf("A seguir, escreva dois números inteiros. Após isso, será informado na tela qual é o maior deles\n");
  scanf("%d %d", &a, &b);
  if (a>b)
    printf ("Entre os dois, o maior número é: %d.", a);
  else
    printf ("Entre os dois, o maior número é: %d.", b);
  return 0;
}