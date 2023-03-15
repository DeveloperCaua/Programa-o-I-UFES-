/* Crie um programa em linguagem C que receba um tempo em anos e imprima quantos dias são equiva-
lentes ao tempo informado. Ex. 3 anos equivalem a 1095 dias. */

#include <stdio.h>

int main(void) {
  int quant_anos, result_dias;
  printf("A seguir, digite uma quantidade de anos para que seja transformada em dias.\n");
  scanf("%d", &quant_anos);
  result_dias = quant_anos * 365;
  printf("%d anos é igual a %d dias.", quant_anos, result_dias);
  return 0;
}