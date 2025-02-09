#include <stdio.h>
int main() {
  int n;
  printf("Enter any number: ");
  scanf("%d", &n);
  int i;
  for (i = 1; i <= n / 2; i++) {
    if (n % i == 0) {
      printf("%d ", i); // factors
    };
  };
}
