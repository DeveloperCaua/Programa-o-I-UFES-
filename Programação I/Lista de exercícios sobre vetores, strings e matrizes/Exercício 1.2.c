/* 1.2. Crie um programa em linguagem C que receba dois vetores de três coordenadas cada u = (u1; u2; u3) e v = (v1; v2; v3). O programa deve calcular o produto vetorial dos dois vetores da seguinte forma r = u × v = (u2*v3 − u3*v2; u3*v1 − u1*v3; u1*v2 − u2*v1). Ao final, o programa deve imprimir qual é o vetor resultante (r) do produto vetorial dos dois vetores recebidos. */

#include <stdio.h>

int main(void) {
  
  int i, k, j;
  
  float vetor_u[3], vetor_v[3], produto_vetorial[3];
  
  printf("A seguir, digite um vetor com três coordenadas.\n");

  for (i=0; i < 3; i++){
    scanf("%f", &vetor_u[i]);
  }

  printf("O seu primeiro vetor é: (%f, %f, %f).\n", vetor_u[0], vetor_u[1], vetor_u[2]);
  printf("Agora, digite um segundo vetor com três coordenadas.\n");
  
  for (k=0; k < 3; k++){
    scanf("%f", &vetor_v[k]);
  }

  printf("O seu segundo vetor é: (%f, %f, %f).\n", vetor_v[0], vetor_v[1], vetor_v[2]);

  produto_vetorial [0] = (vetor_u[1] * vetor_v[2]) - (vetor_u[2] * vetor_v[1]);
  produto_vetorial [1] = (vetor_u[2] * vetor_v[0]) - (vetor_u[0] * vetor_v[2]);
  produto_vetorial [2] = (vetor_u[0] * vetor_v[1]) - (vetor_u[1] * vetor_v[0]);
  
  printf("O produto vetorial resultante desses dois vetores é igual a: (%f, %f, %f).\n", produto_vetorial [0], produto_vetorial [1], produto_vetorial [2]);
  
  return 0;
}