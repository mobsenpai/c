#include <stdio.h>

int rev(int n) {
  int r, rev = 0;
  while (n > 0) {
    r = n % 10;
    rev = (rev * 10) + r;
    n = n / 10;
  }

  return rev;
}

int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("REV: %d\n", rev(num));
}
