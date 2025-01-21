#include <stdio.h>

void main() {
  int m, p, e, c, s, t, a;
  printf("Input marks of Maths, Python, English, C, SA&D");
  scanf("%d%d%d%d%d", &m, &p, &e, &c, &s);
  // Total
  t = m + p + e + c + s;
  // Average
  a = t / 5;

  // Logic
  if (a >= 75) {
    printf("Distinct");
  } else if (a >= 65 && a < 75) {
    printf("First Division");
  } else if (a >= 55 && a < 65) {
    printf("Second Division");
  } else {
    printf("Fail");
  }
}
