/* Crie um programa em linguagem C que receba dez números reais e retorne qual é a média e o desvio
padrão entre eles. Referência: https://youtu.be/c8x_ZChTiLk  */

#include <stdio.h>
#include <math.h>

int main(void) {
  float a, b, c, d, e, f, g, h, i, j, média, variância, desvio_padrão;
  printf("A seguir, escreva dez números reais. Será retornado a média entre eles e o desvio padrão.\n");
  scanf("%f %f %f %f %f %f %f %f %f %f", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j);
  média = (a + b + c + d + e + f + g + h +i + j)/10;
  variância = (pow(a-média, 2) + pow(b-média, 2) + pow(c-média, 2) + pow(d-média, 2) + pow(e-média, 2) + pow(f-média, 2) + pow(g-média, 2) + pow(h-média, 2) + pow(i-média, 2) + pow(j-média, 2))/10;
  desvio_padrão = sqrt(variância);
  printf("A média desses valores é igual a: %f e o desvio padrão é igual a: %f", média, desvio_padrão);
  
  return 0;
}