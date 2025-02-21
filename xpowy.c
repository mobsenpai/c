#include <math.h>
#include <stdio.h>
int main() {
  int x, y, r;
  printf("Enter values of x and y: ");
  scanf("%d%d", &x, &y);
  r = pow(x, y);
  printf("%d raised to %d = %d", x, y, r);
}
