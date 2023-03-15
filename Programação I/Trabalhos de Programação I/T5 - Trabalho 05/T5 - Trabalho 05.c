#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
  int C[60], *C2, a, i, j, k, l, tamanho_M;
  char M[60], K[11]={'E', 'A', 'R', 'T', 'E', '2', '0', '2', '0', '/', '1'}, menu;

  printf("\n| Bem-vindo ao Sistema de Codificação e Decodificação do Cauã (SCDC) \n|\n| A seguir, escolha a opção desejada.          \n|\n| 1- Codificar   |\n| 2- Decodificar |\n| 3- Sair        |\n|\n| O que deseja fazer?\n\nResposta: ");
  
  do{

    scanf("%s", &menu);
    menu = menu - '0'; //transforma o char em int pra utilizar o isdigit
    
    if ((menu < 1 || menu > 3) || (isdigit(menu)=='0')){
      printf("\n| Digite um caracter NÚMERICO válido, por favor.\n\nResposta: ");
    }
    
    switch(menu){
      case 1:
        printf("\n| Opção escolhida com sucesso!\n|\n| Digite uma mensagem, COM ATÉ 60 CARACTERES, para que seja realizada a codificação:\n|\n| Obs:\n|\n| 1- Escreva a mensagem sem espaços;\n| 2- Não utilize letras acentuadas;\n| 3- Troque a letra 'ç' pela 'c';\n| 4- Mensagens maiores que 60 caracteres podem causar vulnerabilidade ao sistema.\n\nResposta: ");
        scanf("%s", M);

        tamanho_M = strlen(M);
        printf("\n| O tamanho da mensagem é de: %d caracteres.\n|\n| Logo abaixo, será encaminhada sua mensagem codificada.\n|\n| ----> ", tamanho_M);
        
        l = 0;
        for(i=0; i<tamanho_M; i++){
          C[i] = M[i] ^ K[l];
          l = l+1;
          
          if (l%11 == 0){
            l=0;
          }
          
          printf("%d ", C[i]);
        }
        printf("<----\n|\n| O que deseja fazer agora?\n|\n| 1- Codificar   |\n| 2- Decodificar |\n| 3- Sair        |\n\nResposta: ");
        
      break;

      case 2:
        
        printf("\n| Opção escolhida com sucesso!\n|\n| A seguir, digite quantos caracteres possui sua mensagem codificada (até 60):\n\nResposta: ");
        scanf("%d", &a);
        printf("\n| Agora, digite cada digito da sua mensagem codificada (%d caracteres):\n\nResposta: ", a);
        
        C2 = (int*) malloc(a * sizeof(int*));
        for (j=0; j<a; j++){
          scanf("%d", &C2[j]);
        }

        printf("\n| Logo abaixo, será encaminhada sua mensagem decodificada:\n|\n");
        
        printf("| ----> ");
        l = 0;
        for(i=0; i<a; i++){
          M[i] = C2[i] ^ K[l];
          l = l+1;
          
          if (l%11 == 0){
            l=0;
          }
    
          printf("%c", M[i]);
        }    
        
        printf(" <----\n|\n| O que deseja fazer agora?\n|\n| 1- Codificar   |\n| 2- Decodificar |\n| 3- Sair        |\n\nResposta: ");
        
      break;

      case 3:
        
        printf("\n| Programa encerrado.\n|\n| Tenha um bom dia!\n|\n| Ass: Cauã (CEO da SCDC - Sistema de Codificação e Decodificação do Cauã)\n");
        
      break;
    }
    
  }while(menu != 3);
    
  return 0;
}