#include <stdio.h>
int main() {
  int a, b, c;
  printf("Enter the angles of triangle: ");
  scanf("%d%d%d", &a, &b, &c);
  if (a + b + c == 180) {
    if (a == 90 || b == 90 || c == 90) {
      printf("Right Triangle");
    } else if (a > 90 || b > 90 || c > 90) {
      printf("Obtuse Triangle");
    } else {
      printf("Acute Triangle");
    }
  } else {
    printf("Invalid triangle");
  }
}
