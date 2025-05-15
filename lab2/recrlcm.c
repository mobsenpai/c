#include <stdio.h>

int lcm(int a, int b, int c, int max) {
  if (max % a != 0 || max % b != 0 || max % c != 0) {
    return lcm(a, b, c, max + 1);
  } else {
    return max;
  }
}

int main() {
  int a = 5, b = 3, c = 2, max;
  if (a >= b && a >= c) {
    max = a;
  } else if (b >= a && b >= c) {
    max = b;
  } else {
    max = c;
  }
  printf("LCM: %d\n", lcm(a, b, c, max));
}
