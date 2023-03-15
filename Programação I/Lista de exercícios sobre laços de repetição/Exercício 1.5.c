/* Crie um programa em linguagem C, utilizando o comando while, que imprima uma mensagem
pedindo para o usuário digitar um número real entre 0.0 e 1.0. O programa deve repetir a solicitação
enquanto não for atendido, quando o usuário digitar o número no intervalo solicitado o programa deve
terminar. */

#include <stdio.h>

int main(void) {
  
  float x;

  printf("A seguir, digite um número entre 0.0 e 1.0, por favor.\n");
  scanf("%f", &x);
  
  while (x<=0 || x>=1){
    printf("Digite um número válido, por favor.\n");
    scanf("%f", &x);

  }
  
  return 0;
}