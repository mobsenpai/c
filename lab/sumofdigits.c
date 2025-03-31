#include <stdio.h>
int main() {
  int n, r, t, s;
  printf("Enter a number: ");
  scanf("%d", &n);
  t = n;
  s = 0;
  while (t > 0) {
    r = t % 10;
    s = s + r;
    t = t / 10;
  }
  printf("Sum of digits: %d", s);
}
