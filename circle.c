#include <stdio.h>

int main() {
  float r, a, p;
  printf("Enter the radius: ");
  scanf("%f", &r);
  a = 3.14 * r * r;
  p = 2 * 3.14 * r;
  printf("Area of circle: %f", a);
  printf("\nPerimeter of circle: %f", p);
}
