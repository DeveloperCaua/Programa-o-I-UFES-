/* Considerando um jogo de cartas onde as cartas de Copas, Espadas, Paus e Ouros têm, respectivamente,
os poderes 1, 2, 3 e 5. Considerando que a força de ataque de uma carta é a multiplicação de seu número
pelo poder de seu naipe. Crie um programa em linguagem C que receba uma carta, representada pelo
seu número e seu naipe, nesta ordem, e imprima a força de ataque da carta.
Considere que os naipes são representados como números inteiros conforme ilustrado a seguir:
1 Copas;
2 Espadas;
3 Paus e
4 Ouros. */

#include <stdio.h>

int main(void) {
  int num_carta, x, poder_da_carta;
  printf("A seguir escreva o número de sua carta e, após isso, escreva o naipe dela (1-Copas; 2-Espadas; 3-Paus e 4-Ouros)\n");
  scanf("%d %d", &num_carta, &x);
  switch (x){
    case 1:
      poder_da_carta = num_carta * 1;
      printf("O poder de sua carta do naipe 'Copas' é igual a: %d", poder_da_carta);
      break;
    case 2:
      poder_da_carta = num_carta * 2;
      printf("O poder de sua carta do naipe 'Espadas' é igual a: %d", poder_da_carta);
      break;
    case 3:
      poder_da_carta = num_carta * 3;
      printf("O poder de sua carta do naipe 'Paus' é igual a: %d", poder_da_carta);
      break;
    case 4:
      poder_da_carta = num_carta * 5;
      printf("O poder de sua carta do naipe 'Ouros' é igual a: %d", poder_da_carta);
      break;
  }
  
  return 0;
}