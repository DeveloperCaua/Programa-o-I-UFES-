/* 1.4. Crie um programa em linguagem C que imprima uma mensagem pedindo para o usuário digitar um número inteiro positivo que represente o tamanho de um vetor (N). Após ter recebido o valor de N, o programa deve criar um vetor de números reais com N posições u = (u1; u2; u3; . . . ; uN ) . Em seguida o programa deve solicitar que o usuário digite N números reais. O programa deve calcular o módulo do vetor da seguinte forma |u| =√u1^2 + u2^2 + · · · + uN^2. Ao final, o programa deve imprimir qual é o valor do módulo do vetor recebido |u|. Inclua a biblioteca math.h e utilize as funções pow e sqrt para calcular respectivamente o ao quadrado e a raiz quadrada. */


#include <stdio.h>
#include <math.h>

int main(void) {

  int i, j, k, N;

  printf("A seguir, digite um número N, o qual representa o tamanho de um vetor.\n");
  scanf("%d", &N);

  j= N +1;
  float vetor[j], modulo, soma;
  soma=0;
  
  printf("Agora, será pedido N números para fomar os números do vetor.\n");
  
  for (i=0; i < N; i++){
    scanf("%f", &vetor[i]);
    printf("%f\n", vetor[i]);
  }

  for (k=0; k < N; k++){
    soma= soma + pow(vetor[k],2);
  }

  modulo= sqrt(soma);

  printf("O módulo resultando do vetor descrito é igual a: %f.", modulo);
  
  return 0;
}