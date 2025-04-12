#include <stdio.h>

int fact(int n) {
  if (n > 1) {
    return n = n * fact(n - 1);
  } else {
    return n;
  }
}

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);

  printf("FACT: %d", fact(n));
}
