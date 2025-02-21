#include <stdio.h>
int main() {
  float f, c;
  printf("Enter temperature in celsisus: ");
  scanf("%f", &c);
  f = (c * 9 / 5) + 32;
  printf("%f°C = %f°F", c, f);
}
