#include <stdio.h>
int main() {
  int n, i, r, t, sum;
  printf("Enter a number: ");
  scanf("%d", &n);
  t = n;
  sum = 0;
  while (t > 0) {
    r = t % 10;
    sum = sum + r;
    t = t / 10;
  }
  printf("Sum: %d", sum);
}
