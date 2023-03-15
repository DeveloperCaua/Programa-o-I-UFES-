//Crie um programa em linguagem C que imprima o nome na tela o nome de quem escreveu o programa.

#include <stdio.h>

int main(void) {
  char nome[50];
  printf("\nEscreva seu nome a seguir\n");
  scanf("%s", nome);
  printf("\nAqui está seu nome:\n%s", nome);
  return 0;
}