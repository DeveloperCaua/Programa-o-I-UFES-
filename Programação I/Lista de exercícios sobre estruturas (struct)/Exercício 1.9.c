#include <stdio.h>
#include<stdlib.h>

typedef struct relogio{
    int horas, minutos, segundos;
  }tRelogio;

int main(void) {
  
  tRelogio horário1, horário2, horário3;
  int segundosH, segundosM, segundosS, segundosTotal;
  
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

  segundosH = (horário1.horas*3600) - (horário2.horas*3600);
  segundosM = (horário1.minutos*60) - (horário2.minutos*60);
  segundosS = horário1.segundos - horário2.segundos;
  segundosTotal = segundosH + segundosM + segundosS;

  horário3.horas = segundosTotal / 3600;
  horário3.minutos = (segundosTotal%3600)/60;
  horário3.segundos = ((segundosTotal%3600)%60);
  
}

if (horário1.horas <= horário2.horas){
  
  segundosH = (horário2.horas*3600) - (horário1.horas*3600);
  segundosM = (horário2.minutos*60) - (horário1.minutos*60);
  segundosS = horário2.segundos - horário1.segundos;
  segundosTotal = segundosH + segundosM + segundosS;

  horário3.horas = segundosTotal / 3600;
  horário3.minutos = (segundosTotal%3600)/60;
  horário3.segundos = ((segundosTotal%3600)%60);
}

printf("Aqui está o horário entre eles: %dh: %dmin: %dseg.\n\n", abs(horário3.horas), abs(horário3.minutos), abs(horário3.segundos));

  return 0;
}