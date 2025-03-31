#include <stdio.h>
int main() {
  int l, b, area, peri;
  printf("Enter lenght and breadth: ");
  scanf("%d%d", &l, &b);
  area = l * b;
  peri = 2 * (l + b);
  printf("Area: %d\n", area);
  printf("Perimeter: %d\n", peri);
}
