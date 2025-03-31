#include <stdio.h>
int main() {
  int n, t, r, rev;
  printf("Enter a number: ");
  scanf("%d", &n);
  rev = 0;
  t = n;
  while (t > 0) {
    r = t % 10;
    rev = rev * 10 + r;
    t = t / 10;
  }
  if (rev == n) {
    printf("The number is a palindrome\n");
  } else {
    printf("Not palindrome\n");
  }
}
