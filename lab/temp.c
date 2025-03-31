#include <stdio.h>
int main() {
  float c, f;
  printf("Enter temperature in Centigrade: ");
  scanf("%f", &c);
  f = (c * 9 / 5) + 32;
  printf("%f Celcius to %f Farhenheit", c, f);
}
