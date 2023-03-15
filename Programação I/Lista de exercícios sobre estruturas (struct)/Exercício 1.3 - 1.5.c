#include <stdio.h>
typedef struct vetor{
    float x, y, z;
  }tVetor;

int main(void) {

  tVetor vetor1;
  
  printf("A seguir, digite a coordenada x de um vetor no espaço R3:\n");
  scanf("%f", &vetor1.x);

  printf("Agora, digite a coordenada y de um vetor no espaço R3:\n");
  scanf("%f", &vetor1.y);

  printf("Por final, digite a coordenada z de um vetor no espaço R3:\n");
  scanf("%f", &vetor1.z);

  printf("Aqui está o seu vetor: (%.2f, %.2f, %.2f)\n", vetor1.x, vetor1.y, vetor1.z);
  
  return 0;
}