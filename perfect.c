// perfect numbers between two user given numbers
#include <stdio.h>
int main() {
  int n1, n2, i, s, j;
  printf("Enter two numbers: ");
  scanf("%d%d", &n1, &n2);

  for (i = n1; i <= n2; i++) {
    s = 0;
    for (j = 1; j <= i; j++) {
      if (i % j == 0) {
        s = s + j;
      }
    }
    if (s == 2 * i) {
      printf("%d ", i);
    }
  }
}
