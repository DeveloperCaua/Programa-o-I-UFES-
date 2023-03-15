/* Crie um programa em linguagem C que leia o arquivo clientes.dat, contendo 5 linhas onde cada linha contém 2 números reais. Considerando que o primeiro número de cada linha representa o peso de uma pessoa e o segundo número representa a altura desta mesma pessoa, escreva no arquivo imc.dat o peso, a altura e o IMC de cada uma das 5 pessoas. */

#include <stdio.h>

int main(void) {
  
  int i;
  float numero[10], imc;
  FILE *arq;

  arq = fopen("clientes.dat", "r");
  for (i=0; i<10; i++){
  fscanf(arq, "%f", &numero[i]);
  }
  fclose(arq);
  
  arq = fopen("imc.dat", "w");
  for (i=0; i<10; i=i +2){
    imc = numero[i] / (numero[i+1] * numero[i+1]);
    fprintf(arq, "%.2f \n", imc);
    printf("%.2f \n", imc);
  }
  fclose(arq);
  
  return 0;
}