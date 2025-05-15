#include <stdio.h>

int perf(int n) {
  int i, s = 0;
  for (i = 1; i < n; i++) {
    if (n % i == 0) {
      s = s + i;
    }
  }
  if (s == n) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int n, r;
  printf("Enter a number: ");
  scanf("%d", &n);
  r = perf(n);
  if (r) {
    printf("It is perfect");
  } else {
    printf("Not perfect");
  }
}
