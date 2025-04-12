#include <stdio.h>

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

int main() {
  int a, b, c, i, r;
  printf("Enter 3 numbers: ");
  scanf("%d%d%d", &a, &b, &c);
  printf("1 for LCM or 2 for HCF\n");
  scanf("%d", &i);
  switch (i) {
  case 1:
    r = lcm(a, b, c);
    printf("LCM=%d", r);
    break;
  case 2:
    r = hcf(a, b, c);
    printf("HCF=%d", r);
    break;
  }
}
