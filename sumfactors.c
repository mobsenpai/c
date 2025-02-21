#include <stdio.h>
int main() {
  int n, i, sum;
  printf("Enter a number: ");
  scanf("%d", &n);
  sum = 0;
  for (i = 1; i <= n / 2; i++) {
    if (n % i == 0) {
      sum = sum + i;
    }
  }
  sum = sum + n;
  printf("Sum of factors of %d: %d", n, sum);
}
