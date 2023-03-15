/*  1.2. Crie um programa em linguagem C, utilizando o comando do .. while, que imprima uma mensagem
pedindo para o usuário digitar uma vogal em letra maiúscula. O programa deve repetir a solicitação
enquanto não for atendido, quando o usuário digitar o caracter no intervalo solicitado o programa deve
terminar.  */ 

#include <stdio.h>

int main(void) {
  char letra;

  do{
    printf("A seguir, digite uma vogal maiúscula.\n");
    scanf ("%c", &letra);
  }while (letra != 'A' && letra != 'E' && letra != 'I' && letra != 'O' && letra!= 'U');

  printf("Parabéns! A letra digitada está em caixa alta e é uma vogal. Todos os requisitos foram completos.");
  
  return 0;
}