/* 1.7. Crie um programa em linguagem C, utilizando o comando while, que imprima uma mensagem
pedindo para o usuário digitar um número inteiro entre 1 e 10. O programa deve repetir a solicitação
enquanto não for atendido. Todo valor entre 1 e 10 deve ser somado coms os demais números digitados,
quando o somatório de todos os números aceitos for igual ou maior a 21, o programa deve terminar
imprimindo qual foi a soma total dos números aceitos. */

#include <stdio.h>

int main(void) {
  int x, soma;
  soma=0;

  printf("Digite um número inteiro entre 1 e 10.\n");

  while (soma < 21){
    scanf ("%d", &x);

    if (x<=1 || x>=10){
        printf("Digita um número que se encaixa nas condições, por favor.\n");
    }
    
      if (x>1 && x<10){
        printf("Boa! Agora digite outro número, porque o programa só se encerra quando os valores somados forem maiores que 21.\n");
        soma = soma + x;
      }
      
  }
  
  printf("O valor da soma entre os números aceitos pelo programa é igual a: %d.\n", soma);
    
  return 0;
}