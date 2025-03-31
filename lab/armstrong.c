#include <stdio.h>
int main() {
  int n, t, r, arm;
  printf("Enter a number: ");
  scanf("%d", &n);
  t = n;
  arm = 0;
  while (t > 0) {
    r = t % 10;
    arm = arm + r * r * r;
    t = t / 10;
  }
  if (arm == n) {
    printf("Armstrong");
  } else {
    printf("Not armstrong");
  }
}
