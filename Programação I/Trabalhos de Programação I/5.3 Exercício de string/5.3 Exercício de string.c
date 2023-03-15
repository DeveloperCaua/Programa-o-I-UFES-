/* 1.6 - Crie um programa em linguagem C que receba duas palavras de cinco letras. O programa deve calcular quantas letras idênticas na mesma posição existem entre as duas palavras. EX: P = "Corda"e Q = "carne", neste caso o programa deve retornar que existem 2 coincidências, sendo elas a letra ’c’ na primeira posição e a letra ’r’ na terceira posição. Ao final, o programa deve imprimir quantas coincidências foram encontradas entre as duas palavras recebidas. Considere letras maiúsculas e
minúsculas como iguais entre si, por exemplo ’a’ e ’A’ devem ser consideradas idênticas, assim como ’b’ e ’B’, etc. 

Aluno: Cauã Enrico Beling           */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {

  char palavra1[6], palavra2[6];
  int i, j, resultado;
  resultado=0;
  
  printf("A seguir, digite duas palavras com cinco letras cada uma. O programa irá calcular quantas letras idênticas na mesma posição existem entre as duas palavras.\n");
  scanf("%s", palavra1);

  printf("Primeira palavra de cinco letras foi concluída, agora começe a escrever a próxima palavra de cinco letras:\n");
  scanf("%s", palavra2);
  
 for (j=0; j < 5; j++){
    palavra1[j] = tolower(palavra1[j]);
    palavra2[j] = tolower(palavra2[j]);
  }

printf("Boa, agora irei comparar cada posição das duas palavras e irei retornar o número de coincidências.\n");
  
  for (i=0; i < strlen(palavra1); i++){
    
    if (palavra1[i] == palavra2[i]){
      printf("Letras iguais: '%c' e '%c'\n", palavra1[i], palavra2[i]);
      resultado = resultado + 1;
    }
  }
  
  printf("Foi encontrada: %d coincidências.\n", resultado);
  
  return 0;
}