/* Crie um programa em linguagem C que receba três números inteiros e imprima na tela qual é o maior
deles. */

#include <stdio.h>

int main(void) {
  int a, b, c;
  printf("A seguir, digite três números inteiros. O programa irá retornar qual é o maior entre eles.\n");
  scanf("%d %d %d", &a, &b, &c);
  if (a>b && a>c)
    printf ("O maior número é: %d", a);
  if (b>a && b>c)
    printf ("O maior número é: %d", b);
  if (c>a && c>b)
    printf ("O maior número é: %d", c);
  
  return 0;
}