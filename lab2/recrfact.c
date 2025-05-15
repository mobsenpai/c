#include <stdio.h>

int fact(int n) {
  if (n > 1) {
    return n * fact(n - 1);
  } else {
    return 1;
  }
}

int main() {
  int n = 5;
  printf("FACT: %d", fact(n));
}
