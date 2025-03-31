#include <stdio.h>
int main() {
  int n, i, f, s;
  printf("Enter a number: ");
  scanf("%d", &n);
  s = 0;
  for (i = 1; i <= n / 2; i++) {
    if (n % i == 0) {
      s = s + i;
    }
  }
  s = s + n;
  printf("Sum of factors of %d = %d", n, s);
}
