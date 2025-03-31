#include <stdio.h>
int main() {
  int n, t, r, se, so;
  printf("Enter a number: ");
  scanf("%d", &n);
  t = n;
  se = 0;
  so = 0;
  while (t > 0) {
    r = t % 10;
    if (r % 2 == 0) {
      se = se + r;
    } else {
      so = so + r;
    }
    t = t / 10;
  }
  printf("Sum of even: %d\n", se);
  printf("Sum of odd: %d\n", so);
}
