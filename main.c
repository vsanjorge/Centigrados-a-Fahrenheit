#include <stdio.h>

int main(void) {
  float centigrados;
  float fahrenheit;

  printf("Introduce una temperatura en grados centígrados: ");
  scanf("%f", &centigrados);

  fahrenheit = centigrados*1.8+32;

  printf("\nSu equivalente en grados fahrenheit es %.1f", fahrenheit);

  return 0;
}