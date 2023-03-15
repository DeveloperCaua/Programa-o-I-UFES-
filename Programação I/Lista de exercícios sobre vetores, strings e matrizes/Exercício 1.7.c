/* 1.7. Crie um programa em linguagem C que receba uma string de até 20 letras. O programa deve contar quantas vogais existem na string recebida. Ao final, o programa deve imprimir quantas vogais foram encontradas. Considere para a contagem tanto vogais minúsculas quanto maiúsculas. */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {

  char palavra[20];
  int i, j, resultado;
  resultado=0;
  
  printf("A seguir, digite uma palavras com até vinte letras. O programa irá contar quantas vogais existem na string recebida.\n");
  scanf("%s", palavra);

  
 for (i=0; i < strlen(palavra); i++){
    palavra[i] = tolower(palavra[i]);
  }

printf("Agora será contado quantas vogais existem nessa palavra.\n");
  
  for (j=0; j < strlen(palavra); j++){
    
    if (palavra[j] == 'a' || palavra[j] == 'e' || palavra[j] == 'i' || palavra[j] == 'o' || palavra[j] == 'u') {
      printf("vogais: '%c'\n", palavra[j]);
      resultado = resultado + 1;
    }
  }
  
  printf("Foi encontrada: %d vogais.\n", resultado);
  
  return 0;
}