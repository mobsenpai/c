#include <stdio.h>

int lcm(int a, int b, int c, int max) {
  if (max % a != 0 || max % b != 0 || max % c != 0) {
    return max = lcm(a, b, c, max + 1);
  } else {
    return max;
  }
}

int main() {
  int a, b, c, max = 0;
  printf("Enter 3 number: ");
  scanf("%d%d%d", &a, &b, &c);
  if (a >= b && a >= c) {
    max = a;
  } else if (b >= a && b >= c) {
    max = b;
  } else {
    max = c;
  }

  printf("LCM: %d", lcm(a, b, c, max));
}
