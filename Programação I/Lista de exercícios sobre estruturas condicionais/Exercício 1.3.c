/*Crie um programa em linguagem C que receba uma temperatura em graus fahrenheit (F) e a converta
para graus celsius (C). */

#include <stdio.h>

int main(void) {
  int fahrenheit, celsius;
  printf("A seguir, escreva uma temperatura em graus fahrenheit para que seja transformada em graus celsius.\n");
  scanf("%d", &fahrenheit);
  celsius = 5*((fahrenheit - 32)/9);
  printf("Resultado: %d", celsius);
}