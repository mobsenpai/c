#include <stdio.h>

int main() {
  int n, m, k;
  printf("Enter any number: ");
  scanf("%d", &n);
  m = n << 3;
  printf("%d after 3 place left: %d\n", n, m);
  k = m >> 2;
  printf("%d after 2 place right: %d\n", m, k);
  if (n & 1) {
    printf("%d is odd\n", n);
  } else {
    printf("%d is even\n", n);
  }
  return 0;
}
