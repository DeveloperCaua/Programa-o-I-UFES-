/* Crie um programa em linguagem C que imprima uma mensagem pedindo para o usuário digitar uma
letra minúsculas. O programa deve repetir a solicitação enquanto não for atendido, quando o usuário
digitar o caracter no intervalo solicitado o programa deve imprimir todas as letras do alfabeto iniciando
na letra ’a’ e indo até a letra informada, após imprimir todas as letras o programa deve terminar. */

#include <stdio.h>

int main(void) {

  char x, letra;

  
  printf("A seguir, escreva uma letra minuscula do alfabeto. O programa irá retornar todas as letras anteriores a x (letra selecionada).\n");
  scanf("%s", &letra);

 while (letra < 97 || letra > 122){
    printf("A seguir, escreva uma letra minuscula do alfabeto. O programa irá retornar todas as letras anteriores a x (letra selecionada).\n");
  scanf("%s", &letra);
  }

  for (x=96; letra>=x; x++){
    printf("%s ", &x);
  }  
  
  return 0;
}