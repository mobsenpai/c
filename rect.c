#include <stdio.h>

int main() {
  int l, b, area, peri;
  printf("Enter length: ");
  scanf("%d", &l);
  printf("Enter breadth: ");
  scanf("%d", &b);
  area = l * b;
  peri = 2 * (l + b);
  printf("Area is : %d", area);
  printf("Perimeter = %d", peri);
}
