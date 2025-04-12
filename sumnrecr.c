#include <stdio.h>

int sum(int n) {
  if (n > 1) {
    return n = n + sum(n - 1);
  } else {
    return n;
  }
}

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  printf("SUM=%d\n", sum(n));
}
