#include <stdio.h>
int main() {
  int n, i, j, k;
  printf("Enter a number: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    for (k = 1; k <= n - i; k++) {
      printf("  ");
    }

    for (j = 1; j <= i; j++) {
      printf("%d ", j);
    }
    printf("\n");
  }
  return 0;
}
