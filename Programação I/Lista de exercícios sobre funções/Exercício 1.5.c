#include <stdio.h>
#include <stdlib.h>

int sacar(float saldo, float saque){
  if (saldo < saque){
    printf("\nSaldo insuficiente!\n\n");
  }
  if (saque <= 0){
    printf("\nValor inexistente, programa encerrado!\n\n");
  }
  if (saldo >= saque && saque > 0){
    saldo = saldo - saque;
    printf("\nSaque realizado com sucesso!\n\n");
  }
  return saldo;
  }

int main(){
  float saldo, saque = 1.0;
  printf("Digite o saldo inicial (número real): ");
  scanf("%f", &saldo);

  while(saque > 0.0){
    printf("Digite o valor a ser sacado: ");
    scanf("%f", &saque);
    sacar(saldo, saque);
  }

  return 0;
}