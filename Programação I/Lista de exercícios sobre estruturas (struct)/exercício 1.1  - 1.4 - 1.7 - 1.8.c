#include <stdio.h>
typedef struct relogio{
    int horas, minutos, segundos;
  }tRelogio;

int main(void) {
  
  tRelogio horário1, horário2;
  
  printf("A seguir, você deverá escrever o horário, os minutos e os segundos de dois relógios diferentes.\n\nDigite as horas:\n(Obs: Digite um valor entre 0 à 23)\n\n");
  scanf("%d",&horário1.horas);
  
  while (horário1.horas<0 || horário1.horas>=24){
  printf("Por favor, digite uma opção válida:\n");
  scanf("%d",&horário1.horas);
  }
  
  printf("Digite os minutos:\n");
  scanf("%d",&horário1.minutos);
  
  while (horário1.minutos<0 || horário1.minutos>=60){
  printf("Por favor, digite uma opção válida:\n");
  scanf("%d",&horário1.minutos);
  }
  
  printf("Digite os segundos:\n");
  scanf("%d",&horário1.segundos);

  while (horário1.segundos<0 || horário1.segundos>=60){
  printf("Por favor, digite uma opção válida:\n");
  scanf("%d",&horário1.segundos);
  }

  printf("Aqui está seu horário: %dh: %dmin: %dseg.\n\nSeu primeiro relógio foi finalizado, a seguir, digite os valores do segundo relógio:\n\n", horário1.horas, horário1.minutos, horário1.segundos);
  scanf("%d",&horário2.horas);
  
  while (horário2.horas<0 || horário2.horas>=24){
  printf("Por favor, digite uma opção válida:\n");
  scanf("%d",&horário2.horas);
  }
  
  printf("Digite os minutos:\n");
  scanf("%d",&horário2.minutos);
  
  while (horário2.minutos<0 || horário2.minutos>=60){
  printf("Por favor, digite uma opção válida:\n");
  scanf("%d",&horário2.minutos);
  }
  
  printf("Digite os segundos:\n");
  scanf("%d",&horário2.segundos);

  while (horário2.segundos<0 || horário2.segundos>=60){
  printf("Por favor, digite uma opção válida:\n");
  scanf("%d",&horário2.segundos);
  }

printf("Aqui está seu horário: %dh: %dmin: %dseg.\n\n", horário2.horas, horário2.minutos, horário2.segundos);

if (horário1.horas > horário2.horas){
  printf("O horário: %dh: %dmin: %dseg vem antes do horário: %dh: %dmin: %dseg.", horário2.horas, horário2.minutos, horário2.segundos, horário1.horas, horário1.minutos, horário1.segundos);
}
if (horário1.horas < horário2.horas){
  printf("O horário: %dh: %dmin: %dseg vem antes do horário: %dh: %dmin: %dseg.", horário1.horas, horário1.minutos, horário1.segundos, horário2.horas, horário2.minutos, horário2.segundos);
}
if (horário1.horas == horário2.horas && horário1.minutos > horário2.minutos){
  printf("O horário: %dh: %dmin: %dseg vem antes do horário: %dh: %dmin: %dseg.", horário2.horas, horário2.minutos, horário2.segundos, horário1.horas, horário1.minutos, horário1.segundos);
}
if (horário1.horas == horário2.horas && horário1.minutos < horário2.minutos){
  printf("O horário: %dh: %dmin: %dseg vem antes do horário: %dh: %dmin: %dseg.", horário1.horas, horário1.minutos, horário1.segundos, horário2.horas, horário2.minutos, horário2.segundos);
}

if  (horário1.horas == horário2.horas && horário1.minutos == horário2.minutos && horário1.segundos > horário2.segundos){
  printf("O horário: %dh: %dmin: %dseg vem antes do horário: %dh: %dmin: %dseg.", horário2.horas, horário2.minutos, horário2.segundos, horário1.horas, horário1.minutos, horário1.segundos);
}

if  (horário1.horas == horário2.horas && horário1.minutos == horário2.minutos && horário1.segundos < horário2.segundos){
  printf("O horário: %dh: %dmin: %dseg vem antes do horário: %dh: %dmin: %dseg.", horário1.horas, horário1.minutos, horário1.segundos, horário2.horas, horário2.minutos, horário2.segundos);
}

if (horário1.horas == horário2.horas && horário1.minutos == horário2.minutos && horário1.segundos == horário2.segundos){
  printf("Os horários digitados são iguais.");
}
  return 0;
}