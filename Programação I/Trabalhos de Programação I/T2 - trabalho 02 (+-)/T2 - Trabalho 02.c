/* Alguns CPFs ficam de fora, rever condições (ifs) do código */
   

#include <stdio.h>

int main(void) {
  long int CPF;
  int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, L, validacao_d10, M,
      validacao_d11;
  printf("A seguir, digite um CPF qualquer (somente números):\n");
  scanf("%ld", &CPF); /* Pegar CPF e guardar na variável "CPF"*/

  d11 = CPF % 10; /* %10 representa o resto da divisão até um número divisivel por 10, após isso, o resto será salvo na variável d11*/
  d10 = (CPF / 10) % 10;
  d9 = (CPF / 100) % 10;
  d8 = (CPF / 1000) % 10;
  d7 = (CPF / 10000) % 10;
  d6 = (CPF / 100000) % 10;
  d5 = (CPF / 1000000) % 10;
  d4 = (CPF / 10000000) % 10;
  d3 = (CPF / 100000000) % 10;
  d2 = (CPF / 1000000000) % 10;
  d1 = (CPF / 10000000000) % 10;

  L = ((10 * d1) + (9 * d2) + (8 * d3) + (7 * d4) + (6 * d5) + (5 * d6) + (4 * d7) + (3 * d8) + (2 * d9)) % 11;

  M = ((10 * d2) + (9 * d3) + (8 * d4) + (7 * d5) + (6 * d6) + (5 * d7) + (4 * d8) + (3 * d9) + (2 * d10)) % 11;

  validacao_d10 = 11 - L;
  
  validacao_d11 = 11 - M;

/*printf("%d\n", L);
  printf("%d\n", M);
  printf("%d\n", validacao_d10);
  printf("%d\n", validacao_d11); */
  
  if ((L<=1 && d10 != 0) || (M<=1 && d11 != 0) || (L>1 && d10 != validacao_d10) || (M>1 && d11 != validacao_d11)){
    printf("O CPF %d%d%d.%d%d%d.%d%d%d-%d%d é inválido.", d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11);
  }
  if ((L<=1 && d10 == 0) && (M<=1 && d11 == 0)){
      printf("O CPF %d%d%d.%d%d%d.%d%d%d-%d%d é válido.", d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11);
  }
  if ((L>1 && d10 == validacao_d10) && (M>1 && d11 == validacao_d11)){
      printf("O CPF %d%d%d.%d%d%d.%d%d%d-%d%d é válido.", d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11);
  }
  
  return 0;
}