/* Considerando que uma lasanha de presunto e queijo possui 7,3%, 11,7% e 6,0% da sua massa, respec-
tivamente, em gordura, carboidratos e proteínas. Considerando também que gordura, carboidrato e
proteína possuem respectivamente 9, 4 e 4 calorias por grama. Crie um programa em linguagem C que
receba o peso de lasanha e calcule a quatidade total de calorias da porção informada. */


#include <stdio.h>

int main(void) {
  int lasanha_peso;
  float gordura, carboidratos, proteinas, calorias_totais;
  printf("A seguir, digite o peso da lasanha:\n");
  scanf("%d", &lasanha_peso);
  gordura = (0.073 * lasanha_peso) * 9;
  carboidratos = (0.117 * lasanha_peso) * 4;
  proteinas = (0.06 * lasanha_peso) * 4;
  calorias_totais = gordura + carboidratos + proteinas;
  printf("O total de calorias presente nessa lasanha é de: %.2f", calorias_totais);
  return 0;
}