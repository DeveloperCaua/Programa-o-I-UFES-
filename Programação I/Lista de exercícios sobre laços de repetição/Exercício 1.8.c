/* 1.8. Crie um programa em linguagem C, utilizando o comando while, que imprima um menu com 5
opções, sendo a opção 5 para sair, e pedindo para o usuário digitar uma das opções. Quando uma
opção for selecionada o programa deve imprimir na tela o nome da opção escolhida. O programa deve
repetir a solicitação enquanto não for escolhida a opção 5 para sair. */

#include <stdio.h>

int main(void) {

  int x;

  printf("Neste aplicativo é possível fazer os seguintes comandos: Encontrar médicos próximos (digite 1), Histórico de consultas (digite 2), Localizar pronto-socorro mais próximo (digite 3), Discar para a Samu (digite 4) e a opção de sair do programa (digite 5). O que você quer fazer?\n");
  scanf("%d", &x);
  
    while (x != 5){

      if (x>5 || x<1)
        printf("Meu guerreiro, te dei as opções e você ainda coloca outro número de sacanagem? Se decide ai...\n");
        scanf("%d", &x);
      
      if (x<= 5 && x>=1)
        switch (x){
          case 1:
            printf("Você escolheu a opção: Encontrar médicos próximos... analisando... Opa, foi encontrado um a cerca de 20km de sua casa.\n");
          break;
        
          case 2:
            printf("Você escolheu a opção: Histórico de consultas... analisando... De acordo com seu histórico, sua última consulta médica foi com uma dermatologista dia 19/10/2022.\n");
          break;

          case 3:
            printf("Você selecionou a opção: Localizar pronto-socorro mais próximo... Analisando... Senhor, o pronto-socorro mais próximo fica a 2km de sua casa.\n");
          break;

          case 4:
          printf("Você selecionou a opção: Discar para a Samu. Discagem em andamento... Se prepare para falar...\n");
          break;

          case 5:
            printf("Você selecionou a opção sair. Desligando o sistema...\n");
          break;
    }
  }
  printf("Sistema encerrado. Tenha um bom dia!\n");
  
  return 0;
}