#include <stdio.h>
#include <stdlib.h>

float **lerMatrizArquivo(char *nomeArquivo, int *m, int *n){
//Q1: Le o arquivo cujo nome eh passado no primeiro parametro (nomeArquivo), retorna a matriz que esta armazenada no arquivo lido e atualiza os parametros m e n com as dimensoes da matriz lida.
  int i, j, k, l;
  float temp[20], **matriz;
  FILE *arq;

  arq = fopen(nomeArquivo, "r");
  for (i=0; i<20; i++){
  fscanf(arq, "%f", &temp[i]);
  }
  fclose(arq);

  *m = temp[0]; *n = temp[1];

  l = 2;
  matriz = (float **)malloc(*m * sizeof(float*));
  for (j=0; j<*m; j++) {
    matriz[j] = (float*)malloc(*n * sizeof(float));
    for (k=0; k<*n; k++){
      matriz[j][k] = temp[l]; 
      l = l + 1;
    }
  }
  
  return matriz;
}

float **produtoMatrizes(float **A, int mA, int nA, float **B, int mB, int nB){
//Q2: Calcula o produto de matrizes A * B. Retorna o resultado do produto.
  int j, k, l;
  float **matriz, resultado, multiplicacao;
  
  matriz = (float **)malloc(mA * sizeof(float*));
  for (j=0; j<mA; j++) {
    matriz[j] = (float*)malloc(nB * sizeof(float));
  }

  for (j=0; j<mA; j++){
    for (k=0; k<nB; k++){
      resultado = 0;
      if (nA <= nB){
        for (l=0; l<nA; l++){
          multiplicacao = (A[j][l] * B[l][k]);
          resultado = resultado + multiplicacao;
        }
      matriz[j][k] = resultado;
      }
      
      else {
        for (l=0; l<nB; l++){
        multiplicacao = (A[j][l] * B[l][k]);
        resultado = resultado + multiplicacao;
        }
      matriz[j][k] = resultado;
      }
        
      }
    }
  
  return matriz;
}

void imprimeMatriz(float **A, int m, int n){
//Q3: Imprime na tela a matriz passada como parametro.
  int j, k;
  
  printf("\n\n");
  for (j=0; j<m; j++) {
  printf("| ");
    for (k=0; k<n; k++){
      printf("%7.2f ", A[j][k]);
    }
    
  printf(" |\n");
  }

}

int main(){
    float **A, **B, **R;
    int mA, nA, mB, nB;
	
    A = lerMatrizArquivo( "matrizA.dat", &mA, &nA);
    B = lerMatrizArquivo( "matrizB.dat", &mB, &nB);
	
    if(nA == mB){
        R = produtoMatrizes(A, mA, nA, B, mB, nB);
        
        printf(" A = ");
        imprimeMatriz(A, mA, nA);
        printf("\n B = ");
        imprimeMatriz(B, mB, nB);
        printf("\n A * B = ");
        imprimeMatriz(R, mA, nB);
        
        return 0;
    } else {
        printf("As dimensoes das matrizes nao permitem o calculo do produto entre elas na ordem pedida\n");
        return 1;
    }
}