#include <stdio.h>

int arm(int n) {
  int t, r, result = 0;
  t = n;
  while (t > 0) {
    r = t % 10;
    result = result + (r * r * r);
    t = t / 10;
  }

  if (result == n) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  if (arm(n)) {
    printf("Armstrong");
  } else {
    printf("Not Armstrong");
  }
}
