#include <stdio.h>

int hcf(int a, int b, int c) {
  int min;
  if (a <= b && a <= c) {
    min = a;
  } else if (b <= a && b <= c) {
    min = b;
  } else {
    min = c;
  }

  while (a % min != 0 || b % min != 0 || c % min != 0) {
    min--;
  }

  return min;
}

int lcm(int a, int b, int c) {
  int max;
  if (a >= b && a >= c) {
    max = a;
  } else if (b >= a && b >= c) {
    max = b;
  } else {
    max = c;
  }

  while (max % a != 0 || max % b != 0 || max % c != 0) {
    max++;
  }

  return max;
}

int main() {
  int a = 4, b = 2, c = 5;
  printf("LCM = %d\n", lcm(a, b, c));
  printf("HCF = %d\n", hcf(a, b, c));
}
