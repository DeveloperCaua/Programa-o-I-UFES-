/* Crie um programa em linguagem C que receba dez números reais e retorne qual é a soma de todos os
números informados. */

#include <stdio.h>

int main(void) {
  float a, b, c, d, e, f, g, h, i, j, soma;
  printf("A seguir, escreva dez números reais para que seja feita a soma de todos eles.\n");
  scanf("%f %f %f %f %f %f %f %f %f %f", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
  soma = a + b + c + d + e + f + g + h + i + j;
  printf("A soma de todos os valores é igual a: %f", soma);
  return 0;
}