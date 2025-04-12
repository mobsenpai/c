#include <stdio.h>

int perf(int n) {
  int f = 0, i;
  for (i = 1; i <= n; i++) {
    if (n % i == 0) {
      f = f + i;
    }
  }

  if (f == 2 * n) {
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  if (perf(num)) {
    printf("%d is perfect number\n", num);
  } else {
    printf("Not a perf number\n");
  }
}
