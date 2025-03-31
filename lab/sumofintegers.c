#include <stdio.h>
int main() {
  int n, i, s;
  printf("Enter a number: ");
  scanf("%d", &n);
  s = 0;
  for (i = 1; i <= n; i++) {
    s = s + i;
  }
  printf("Sum = %d", s);
}
