// to find perfect number between a user given number

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
  int num, i;
  printf("Enter a number: ");
  scanf("%d", &num);
  printf("Perfect numbers between 1 to %d are as follows:\n", num);
  for (i = 1; i <= num; i++) {
    if (perf(i)) {
      printf("%d\n", i);
    }
  }
}
