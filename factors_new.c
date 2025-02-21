#include <stdio.h>
int main() {
  int n, i, f;
  printf("Enter a number: ");
  scanf("%d", &n);
  for (i = 1; i <= n / 2; i++) {
    if (n % i == 0) {
      printf("%d ", i);
    }
  }
  printf("%d", n);
}
