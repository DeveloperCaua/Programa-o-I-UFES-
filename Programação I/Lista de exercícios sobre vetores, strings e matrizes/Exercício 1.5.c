/* 1.5. Crie um programa em linguagem C que receba duas palavras de cinco letras. O programa deve calcular quantas letras idênticas na mesma posição existem entre as duas palavras. EX: P = "corda"e Q = "carne", neste caso o programa deve retornar que existem 2 coincidências, sendo elas a letra ’c’ na primeira posição e a letra ’r’ na terceira posição. Ao final, o programa deve imprimir quantas coincidências foram encontradas entre as duas palavras recebidas. Considere letras maiúsculas e minúsculas como diferentes entre si. */

#include <stdio.h>

int main(void) {

  char palavra1[6], palavra2[6];
  int i, j, resultado;
  resultado=0;
  
  printf("A seguir, digite duas palavras com cinco letras cada uma. O programa irá calcular quantas letras idênticas na mesma posição existem entre as duas palavras.\n");
  scanf("%s", palavra1);

  printf("Primeira palavra de cinco letras foi concluída, agora começe a escrever a próxima palavra de cinco letras:\n");
  scanf("%s", palavra2);
  
printf("Boa, agora irei comparar cada posição das duas palavras e irei retornar o número de coincidências.\n");
  
  for (i=0; i < 5; i++){
    
    if (palavra1[i] == palavra2[i]){
      printf("Letras iguais: '%c' e '%c'\n", palavra1[i], palavra2[i]);
      resultado = resultado + 1;
    }
  }

  printf("Foi encontrada: %d coincidências.\n", resultado);
  
  return 0;
}