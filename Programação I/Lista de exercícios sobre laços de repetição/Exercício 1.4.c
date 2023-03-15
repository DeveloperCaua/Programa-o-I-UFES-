/*  1.4. Crie um programa em linguagem C, utilizando o comando do .. while, que imprima um menu
com 5 opções, sendo a opção 5 para sair, e pedindo para o usuário digitar uma das opções. Quando
uma opção for selecionada o programa deve imprimir na tela o nome da opção escolhida. O programa
deve repetir a solicitação enquanto não for escolhida a opção 5 para sair.  */

#include <stdio.h>

int main(void) {
  int x;

  printf("Neste caixa eletrônico é possível visualizar as seguintes coisas: seu saldo bancário (Digite 1), boletos vencidos (digite 2), status de solicitação de empréstico/solicitação de empréstimo (digite 3), localizar, no banco de dados, cartões de crédito vinculados ao seu nome (digite 4) e, por último, a opção de SAIR (digite 5)\n");

    do{
      scanf("%d", &x);
      
      if (x <= 0 || x>=6)
        printf("Meu amigo, te dei as cinco opções, porque tu ta digitando outros números? Coloca o certo ai logo...\n");
      
      if (x>0 && x<6)
        switch (x){
        case 1:
          printf("Verificando saldo bancário... Rapaz, você é milionário?\n");
        break;

        case 2:
          printf("Procurando boletos vencidos vinculados ao seu nome... Atraso de 3 meses na conta de luz! Que isso jovem\n");
        break;

        case 3:
          printf ("O status atual da sua solicitação de empréstimo bancário ainda está pendente...\n");
        break;

        case 4:
          printf("Nenhum cartão de crédito encontrado...\n");
        break;

        case 5:
          printf ("Saindo...\n");
        break;
      }
      
    }while (x != 5);
  
  printf("Programa desligado.");
      
  return 0;
}