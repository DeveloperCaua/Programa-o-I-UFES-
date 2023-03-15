#include <stdio.h>
#include <stdlib.h>

float areaRetangulo(float b, float h){
  float x;
  x = b * h;
  
  return x;
}

int main(){
  float a, b, r;
  printf("Digite o tamanho da base do retângulo: ");
  scanf("%f", &a);

  printf("\nDigite a altura do retângulo: ");
  scanf("%f", &b);

  r = areaRetangulo(a, b);

  printf("\nA área do retângulo é %.2f\n", r);
  return 0;
}