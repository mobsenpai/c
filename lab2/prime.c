#include <stdio.h>

int prime(int n) {
  int i;
  if (n < 2) {
    return 0;
  }
  for (i = 2; i < n; i++) {
    if (n % i == 0) {
      return 0;
    }
  }
  return 1;
}

int main() {
  int n, r;
  printf("Enter a number: ");
  scanf("%d", &n);
  r = prime(n);
  if (r) {
    printf("prime");
  } else {
    printf("not prime");
  }
}
