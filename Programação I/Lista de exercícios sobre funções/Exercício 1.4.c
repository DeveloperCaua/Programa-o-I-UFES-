#include <stdio.h>
#include <stdlib.h>

#define N 5

void imprimeRendaAnual(float salario){
  printf("Salario Anual de: %.2f\n\n", 12 * salario);
  return;
}

int aumentaSalario(float *salario, float aumento){
  int x;
  salario[x] = salario[x] + aumento;
  return salario[x];
}

int main(){
  int i, k;
  float aumento, sal[N];

  printf("Digite %d números reais (salario mensal):\n", N);

  for(i = 0; i < N; i++) 
    scanf("%f", &sal[i]);

  printf("Digite um numero inteiro de 0 a %d:\n", N - 1);

  scanf("%d", &k);

  printf("Digite um número real que represente quanto deve ser dado de aumento\n");
  scanf("%f", &aumento);

  aumentaSalario(&sal[k], aumento);

  for(i = 0; i < N; i++)
    imprimeRendaAnual(sal[i]);

  return 0;
}