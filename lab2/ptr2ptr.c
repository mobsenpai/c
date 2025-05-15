#include <stdio.h>

int main() {
  int *p, **q, n = 5;
  p = &n;
  q = &p;

  printf("%d\n", n);
  printf("%d\n", *p);
  printf("%d\n", **q);

  return 0;
}
