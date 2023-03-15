/* Crie um programa em linguagem C que receba a altura e o peso de uma pessoa e imprima na tela o
índice de massa corporal (IMC). */

#include <stdio.h>

int main(void) {
  float peso, altura, IMC;
  printf("A seguir, escreva seu peso e, em sequência, sua altura.\n");
  scanf("%f %f", &peso, &altura);
  IMC = peso/(altura * altura);
  printf("De acordo com os valores informados, o IMC resultante foi de: %.2f", IMC);
  return 0;
}