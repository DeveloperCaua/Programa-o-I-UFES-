#include <stdio.h>
#include <stdlib.h>

void imprimeMaior(int a, int b){
  if (a >= b){
    printf("\nO maior número é: %d", a);
  }
  else
    printf("\nO maior número é: %d", b);
}

int main(){
  int x, y;

  printf("Digite um número inteiro: ");
  scanf("%d", &x);

  printf("\nDigite outro número inteiro: ");
  scanf("%d", &y);

  imprimeMaior(x, y);

  return 0;
}