/* 1.3. Crie um programa em linguagem C que receba dois vetores de três coordenadas cada u = (u1; u2; u3) e v = (v1; v2; v3). O programa deve calcular o módulo de cada um dos dois vetores da seguinte forma |u| = √u1^2 + u2^2 + u3^2 e |v| = √v1^2 + v2^2 + v3^2. Ao final, o programa deve imprimir quais são os valores do módulo de cada um dos dois vetores recebidos |u| e |v|. Inclua a biblioteca math.h e utilize as funções pow e sqrt para calcular respectivamente o ao quadrado e a raiz quadrada. */ 

#include <stdio.h>
#include <math.h>

int main(void) {

  int i, j;
  float vetor_u[3], vetor_v[3], modulo_de_u, modulo_de_v;

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

  modulo_de_u = sqrt(pow(vetor_u[0],2) + pow(vetor_u[1],2) + pow(vetor_u[2],2));
  modulo_de_v = sqrt(pow(vetor_v[0],2) + pow(vetor_v[1],2) + pow(vetor_v[2],2));

  printf("O módulo do vetor u é igual a: %f\n", modulo_de_u);
  printf("O módulo do vetor v é igual a: %f\n", modulo_de_v);
  
  return 0;
}