#include <stdio.h>

int main(void) {
  int codigo[200], decodificacao[200], i, j, k, l;
  FILE *arq;
  char K[14];

  printf("\n| Bem-vindo ao Sistema de Decodificação do Cauã (SCDC) |\n\n| A seguir, escreva a chave que será utilizada para realizar o processo.\n\n| * A chave aceita é o seu número de matrícula da faculdade;\n| * Lembre-se de inserir o arquivo.dat que contém seu código;\n| * Lembre-se de digitar a  sua matrícula com '.dat' no final. (exemplo: 2022200212.dat) \n");

  do{
    
  printf("\nDigite aqui sua matrícula: ");
  scanf("%s", K);
    
  printf("\nEssa matrícula é sua? --> ");
  for (j=0; j<10; j++){
    printf("%c", K[j]);
  }
  printf(" <--\n\n* Digite '1' para sim ou '2' para não;\n\nInsira sua resposta: ");
  scanf("%d", &k);
    
  }while (k != 1);
  printf("\nAqui está sua mensagem decodificada:\n\n----------------------------------------------------------------------------------------\n\n");

  arq = fopen(K, "r");
  
  for (i=0; i<200; i++){
  fscanf(arq, "%d", &codigo[i]);
  }
  fclose(arq);
       
  l = 0;
  for(i=0; i<200; i++){
    decodificacao[i] = codigo[i] ^ K[l];
    l = l+1;
          
    if (l%10 == 0){
    l=0;
    }
          
    printf("%c", decodificacao[i]);
  }
  printf("\n\n----------------------------------------------------------------------------------------\n");
  
  return 0;
}