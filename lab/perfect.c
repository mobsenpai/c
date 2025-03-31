#include <stdio.h>
int main() {
  int n, i, sf;
  printf("Enter a number: ");
  scanf("%d", &n);
  sf = 0;
  for (i = 1; i <= n / 2; i++) {
    if (n % i == 0) {
      sf = sf + i;
    }
  }
  sf = sf + n;
  if (sf == 2 * n) {
    printf("Perfect number");
  } else {
    printf("Not perfect number");
  }
}
