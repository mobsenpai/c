#include <stdio.h>

int fact(int n) {
  int i, f = 1;
  if (n < 0) {
    printf("Error: no factorial of negative numbers\n");
    return -1;
  } else {
    for (i = 1; i <= n; i++) {
      f = f * i;
    }
  }

  return f;
}

int main() {
  int num, r;
  printf("Enter a number: ");
  scanf("%d", &num);

  r = fact(num);
  if (r != -1) {
    printf("Factorial of %d = %d\n", num, r);
  }
}

// NOTE: factorial of 0 is 1
