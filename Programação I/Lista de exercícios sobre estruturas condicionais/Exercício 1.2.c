/*Crie um programa em linguagem C que receba dois números inteiros, calcule o produto destes números
e imprima o resultado na tela.*/

#include <stdio.h>

int main(void) {
  int a, b, produto;
  printf("A seguir, digite dois números inteiros para que seja feito o produto entre eles.\n");
  scanf("%d %d", &a, &b);
  produto = a * b;
  printf("O resultado do produto entre os números digitados é igual a:\n%d", produto);
}