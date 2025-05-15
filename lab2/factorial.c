#include <stdio.h>

int fact(int n) {
  int i, f = 1;
  for (i = 1; i <= n; i++) {
    f = f * i;
  }

  return f;
}

int main() {
  int n = 5;
  printf("fact of %d = %d\n", n, fact(n));
}
