/* Grupo: Cauã Enrico Beling e Gabriel dos Santos Souza; Programação I; Turma S.I 2022-2 */

#include <stdio.h>

int main(void) {
  int i, k, j;
  float vetor01[3], vetor02[3],multp [3], produto_escalar;
  produto_escalar=0;
  printf("\nA seguir, digite um vetor com três coordenadas.\n");

  for (i=0; i < 3; i++){
    scanf("%f", &vetor01[i]);
  }

  printf("\nO seu primeiro vetor é: (%.2f, %.2f, %.2f).\n", vetor01[0], vetor01[1], vetor01[2]);
  printf("\nAgora, digite um segundo vetor com três coordenadas.\n");
  
  for (k=0; k < 3; k++){
    scanf("%f", &vetor02[k]);
  }

  printf("\nO seu segundo vetor é: (%.2f, %.2f, %.2f).\n", vetor02[0], vetor02[1], vetor02[2]);

  for (j=0; j<3; j++){
    multp[j] = vetor01 [j] * vetor02[j];
    produto_escalar= produto_escalar + multp[j];
  }
  printf("\nO produto escalar entre esses dois vetores é igual a: %.2f\n", produto_escalar);
  
  return 0;
}