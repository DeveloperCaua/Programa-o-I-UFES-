/* Crie um programa em linguagem C que mostre ao usuário um menu com 4 opções listadas a seguir. 1 Soma; 2 Multiplicação; 3 Menor e 4 Maior. Após o usuário escolher qual das opções deseja, o programa deverá receber números inteiros e proceder conforme a opção selecionada anteriormente. Se na opção 1, informar a soma dos dois números. Se na opção 2, informar a multiplicação dos dois números. Se na opção 3, informar o menor dos dois números, Se na opção 4, informar o maior dos dois números. */

#include <stdio.h>

int main(void) {
  int x, a, b, resultado;
  printf("A seguir, escolha uma das opções listadas, digite: 1-Soma; 2-Multiplicação; 3-Menor e 4-Maior. Após isso, digite dois números inteiros para que seja feita a conta escolhida com eles.\n");
  scanf (" %d %d %d", &x, &a, &b);
  switch (x){
    case 1:
      resultado = a + b;
      printf("O resultado da conta escolhida '1-Soma' é igual a: %d.", resultado);
    break;

    case 2:
      resultado = a * b;
      printf("O resultado da conta escolhida '2-Multiplicação' é igual a: %d.", resultado);
    break;

    case 3:
      if (a > b)
        printf("De acordo com a conta escolhida '3-Maior', o número maior é igual a %d e o número menor é igual a %d", a, b);
      else
        printf("De acordo com a conta escolhida '3-Maior', o número maior é igual a %d e o número menor é igual a %d", b, a);
    break;

    case 4:
      if (a < b)
        printf("De acordo com a conta escolhida '4-Menor', o número menor é igual a %d e o número maior é igual a %d", a, b);
      else
        printf("De acordo com a conta escolhida '4-Menor', o número menor é igual a %d e o número maior é igual a %d", b, a);
    break;
    }
      
  return 0;
}