/* Crie um programa em linguagem C que imprima uma mensagem pedindo para o usuário digitar um
número inteiro positivo. O programa deve imprimir a soma de todos os números inteiros de 1 até o
número informado pelo usuário, quando terminar de imprimir os números o programa deve terminar. */

#include <stdio.h>

int main(void) {

  int numero, i, soma;
  
  printf("Digite um número inteiro positivo qualquer. O programa irá retornar a soma de todos os números anteriores a ele, a partir do número 1.\n");
  scanf("%d", &numero);
  
  for (i=1; i<=numero; i++){
    soma= soma + i;
  }
  
  printf("A soma do número digitado, mais os anteriores a ele é igual a: %d", soma);
  
  return 0;
}