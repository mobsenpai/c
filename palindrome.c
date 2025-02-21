#include <stdio.h>
int main() {
  int n, t, r, rev;
  printf("Enter a number: ");
  scanf("%d", &n);
  t = n;
  rev = 0;
  while (t > 0) {
    r = t % 10;
    rev = rev * 10 + r;
    t = t / 10;
  }
  if (rev == n) {
    printf("Palindrome");
  } else {
    printf("Not Palindrome");
  }
}
