#include <stdio.h>
#include <stdlib.h>

#define N 5

void crescDesc(int a, int b){
  if (a > b){
    printf("%d e %d Está em ordem decrescente.\n", a, b);
  }
  if (a==b){
    printf("%d e %d São iguais.\n", a, b);
  }
  if (a < b){
    printf("%d e %d Está em ordem crescente.\n", a, b);
  }
}

int main(){
  int i, vet[N];

  printf("Digite %d números inteiros:\n\n", N);

  for(i = 0; i < N; i++) 
    scanf("%d", &vet[i]);

  for(i = 0; i < N-1; i++)
    crescDesc(vet[i], vet[i+1]);

  return 0;
}