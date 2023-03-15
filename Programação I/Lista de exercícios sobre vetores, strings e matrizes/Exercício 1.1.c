/* 1.1. Crie um programa em linguagem C que receba dois vetores de três coordenadas cada u = (u1; u2; u3) e v = (v1; v2; v3). O programa deve calcular a soma dos vetores da seguinte forma r = u + v = (u1 + v1; u2 + v2; u3 + v3). Ao final, o programa deve imprimir qual é o vetor resultante (r) da soma dos dois vetores recebidos. */

#include <stdio.h>

int main(void) {

  int i, j, k;
  float vetor_u[3], vetor_v[3], vetor_r[3];

  printf("Neste programa, será feito o calculo da soma de dois vetores.\n");
  printf("A seguir, digite um vetor de três coordenadas:\n");
  
  for (i=0; i < 3; i++){
    scanf("%f", &vetor_u[i]);
  }
  
  printf("O vetor formado por estes valores é igual a:(%f, %f, %f).\n", vetor_u[0], vetor_u[1], vetor_u[2]);

  printf("A seguir, digite um vetor de três coordenadas:\n");
  
  for (j=0; j < 3; j++){
    scanf("%f", &vetor_v[j]);
  }
  
  printf("O vetor formado por estes valores é igual a:(%f, %f, %f).\n", vetor_v[0], vetor_v[1], vetor_v[2]);

  for (k=0; k < 3; k++){
    vetor_r[k] = vetor_u[k] + vetor_v[k];
  }    

  printf("A soma dos vetores informados resulta em: (%f, %f ,%f).", vetor_r[0], vetor_r[1], vetor_r[2]);
  
  return 0;
}