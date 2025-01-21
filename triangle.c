#include <stdio.h>

int main() {
  int a, b, c, sum;
  printf("Enter the angles of triangle");
  scanf("%d%d%d", &a, &b, &c);
  sum = a + b + c;

  if (sum == 180) {
    if (a > 90 || b > 90 || c > 90) {
      printf("Obtuse triangle");
    } else if (a == 90 || b == 90 || c == 90) {
      printf("Right triangle");
    } else {
      printf("Acute triangle");
    }
  } else {
    printf("Invalid triangle");
  }
}
