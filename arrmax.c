#include <stdio.h>

int main() {
  int num[10], i, max, min;
  printf("Enter 10 integers:\n");
  for (i = 0; i < 10; i++) {
    scanf("%d", &num[i]);
  }

  max = num[0];
  min = num[0];
  for (i = 0; i < 10; i++) {
    if (num[i] >= max) {
      max = num[i];
    } else if (num[i] <= min) {
      min = num[i];
    }
  }

  printf("MAX: %d\n", max);
  printf("MIN: %d\n", min);
}
