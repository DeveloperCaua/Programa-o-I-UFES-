/* 1.6. Crie um programa em linguagem C, utilizando o comando while, que imprima uma mensagem
pedindo para o usuário digitar uma vogal em letra maiúscula. O programa deve repetir a solicitação
enquanto não for atendido, quando o usuário digitar o caracter no intervalo solicitado o programa deve
terminar. */

#include <stdio.h>

int main(void) {
  
  char x;

  printf("A seguir, escreva uma vogal em caixa alta (letra maiúscula), por favor.\n");
  scanf("%s", &x);
  
  while (x != 'A' && x != 'E' && x != 'I' && x !='O' && x != 'U'){
  
    printf("Escreva uma letra que se encaixe na condição, por favor.\n");
    scanf("%s", &x);
  }

  printf("Parabéns, a condição foi atendida! Programa desligando...");
  return 0;
}