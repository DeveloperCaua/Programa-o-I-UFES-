/* Crie um programa em linguagem C, utilizando o comando for, que imprima uma mensagem pedindo
para o usuário digitar 9 números reais. Quando o usuário digitar os 9 números o programa deve
terminar. */

#include <stdio.h>

int main(void) {

  int x;
  float y;

  x=0;
  
  printf("A seguir, digite nove números reais.\n");

  while (x!=9){
    x++;
    scanf("%f", &y);
  }

  printf("Parabéns, os nove números reais foram digitados com sucesso!");
  
  return 0;
}