/* Crie um programa em linguagem C, utilizando o comando for, que imprima uma mensagem pedindo para o usuário digitar dois números inteiros. O programa deve imprimir todos os números inteiros do menor até o maior dos dois. O programa deve terminar após imprimir todos os números. */

#include <stdio.h>

int main(void) {
  int x, y, i;
  printf("A seguir, digite dois números inteiros:\n");
  scanf(" %d %d", &x, &y);

  printf("Aqui estão todos os números presentes entre o menor e o maior deles: ");
  
  if (x>y)
    for (i=y; i <= x; i++){
      printf("%d ", i);
    }
    
  else
    for (i=x; i <= y; i++){
      printf("%d ", i);
    }
  
  return 0;
}

/* Comentário linha 13: então, i é igual a y. Enquanto i for menor igual a x, será adicionado 1 ao valor de i e será printado o valor de i enquanto essa condição for aceita */

/* Comentario linha 17: então, i é igual a x. Enquanto i for menor igual a y, será adicionado 1 ao valor de i e será printado o valor de i enquanto essa condição for aceita */