/* 1.1. Crie um programa em linguagem C, utilizando o comando do .. while, que imprima uma mensagem
pedindo para o usuário digitar um número real entre 0.0 e 1.0. O programa deve repetir a solicitação
enquanto não for atendido, quando o usuário digitar o número no intervalo solicitado o programa deve
terminar. */

#include <stdio.h>

int main(void) {
  float numb;

  do{
    printf("A seguir, digite um número que esteja entre 0.0 e 1.0.\n");
    scanf ("%f", &numb);
  }while (numb >= 1.0 || numb <= 0.0);

  printf("Parabéns! O número digitado está entre 0.0 e 1.0");
  return 0;
}