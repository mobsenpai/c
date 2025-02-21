#include <stdio.h>
int main() {
  int n, sum, i;
  printf("Enter a number: ");
  scanf("%d", &n);
  sum = 0;
  for (i = 1; i <= n; i++) {
    sum = sum + i;
  }
  printf("Sum = %d", sum);
}
