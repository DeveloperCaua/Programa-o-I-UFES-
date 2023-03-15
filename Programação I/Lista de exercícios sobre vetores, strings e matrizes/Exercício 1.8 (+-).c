/* Crie um programa em linguagem C que receba uma palavra de até 25 letras. O programa deve calcular a pontuação da palavra multiplicando a soma da pontuação de cada letra pelo tamanho da palavra. Ao final, o programa deve imprimir a pontuação obtida pela palavra digitada. A pontuação de cada letra é a seguinte:
1 ponto ’A’, ’E’, ’I’, ’O’, ’S’, ’U’, ’M’, ’R’, ’T’
2 pontos ’D’, ’L’, ’C’, ’P’
3 pontos ’N’, ’B’, ’Ç’
4 pontos ’F’, ’G’, ’H’, ’V’
5 pontos ’J’
6 pontos ’Q’
8 pontos ’X’, ’Z’, ’K’, ’Y’, ’W’
Considere letras maiúsculas e minúsculas como iguais entre si, por exemplo ’a’ e ’A’ devem ser consideradas idênticas, assim como ’b’ e ’B’, etc. 

O programa quebra ao utilizar 'ç' ou acentuação.   */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void) {

  char palavra[25];
  int i, j, k,resultado_final, tamanho, ponto[7];
  
  ponto[0]=0; ponto[1]=0; ponto[2]=0; ponto[3]=0; ponto[4]=0; ponto[5]=0; ponto[6]=0; resultado_final=0;
    
  printf("A seguir, digite uma palavras com até vinte e cinco letras. O programa irá calcular a pontuação da palavra multiplicando a soma da pontuação de cada letra pelo tamanho da palavra.\n Tabela de pontos:\n 1 ponto ’A’, ’E’, ’I’, ’O’, ’S’, ’U’, ’M’, ’R’, ’T’\n 2 pontos ’D’, ’L’, ’C’, ’P’ \n 3 pontos ’N’, ’B’, ’Ç’ \n 4 pontos ’F’, ’G’, ’H’, ’V’ \n 5 pontos ’J’ \n 6 pontos ’Q’ \n 8 pontos ’X’, ’Z’, ’K’, ’Y’, ’W’\n Obs: letras maiúsculas e minúsculas serão consideradas iguais entre si.\n");
  scanf("%s", palavra);

  tamanho = strlen(palavra);

  
 for (i=0; i < strlen(palavra); i++){
    palavra[i] = tolower(palavra[i]);
  }

printf("Palavra recebida com sucesso!\nO tamanho da palavra é igual a: %d\n", tamanho);
  
  for (j=0; j < strlen(palavra); j++){
    
    if (palavra[j] == 'a' || palavra[j] == 'e' || palavra[j] == 'i' || palavra[j] == 'o' || palavra[j] == 's' || palavra[j] == 'u' || palavra[j] == 'm' || palavra[j] == 'r' || palavra[j] == 't' ) {
      ponto[0] = ponto[0] + 1;
    }   
    if (palavra[j] == 'd' || palavra[j] == 'l' || palavra[j] == 'c' || palavra[j] == 'p') {
      ponto[1] = ponto[1] + 2;
    }
    if (palavra[j] == 'n' || palavra[j] == 'b' || palavra[j] == 135) {
      ponto[2] = ponto[2] + 3;
    }
    if (palavra[j] == 'f' || palavra[j] == 'g' || palavra[j] == 'h' || palavra[j] == 'v') {
      ponto[3] = ponto[3] + 4;
    }
    if (palavra[j] == 'j') {
      ponto[4] = ponto[4] + 5;
    }
    if (palavra[j] == 'q') {
      ponto[5] = ponto[5] + 6;
    }
    if (palavra[j] == 'x' || palavra[j] == 'z' || palavra[j] == 'k' || palavra[j] == 'y' || palavra[j] == 'w') {
      ponto[6] = ponto[6] + 8;
    }
  }

  printf("Quantidade de pontos totalizados por letras que valem 1 ponto: %d.\nQuantidade de pontos totalizados por letras que valem 2 pontos: %d.\nQuantidade de pontos totalizados por letras que valem 3 pontos: %d.\nQuantidade de pontos totalizados por letras que valem 4 pontos: %d.\nQuantidade de pontos totalizados por letras que valem 5 pontos: %d.\nQuantidade de pontos totalizados por letras que valem 6 pontos: %d.\nQuantidade de pontos totalizados por letras que valem 8 pontos: %d.\n", ponto[0], ponto[1], ponto[2], ponto[3], ponto[4], ponto[5], ponto[6]);

  for (k=0; k<7;k++)
    resultado_final = resultado_final + (ponto[k] * tamanho);
    
  printf("O resultado final, ou seja, a pontuação obtida pela palavra digitada é igual a: %d", resultado_final);

  return 0;
}