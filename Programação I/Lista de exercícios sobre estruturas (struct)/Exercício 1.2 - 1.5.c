#include <stdio.h>

typedef struct latlong{
    float latitude, longitude;
  }tLatLong;

int main(void) {

 tLatLong latlong1; 
  
  printf("A seguir, digite uma latitude:\n");
  scanf("%f", &latlong1.latitude);

  printf("Agora, digite uma longitude:\n");
  scanf("%f", &latlong1.longitude);

  printf("A sua latitude é: %.2f\nSua longitude é: %.2f\n", latlong1.latitude, latlong1.longitude);
  return 0;
}