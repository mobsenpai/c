#include <stdio.h>

int main() {
  int num[10], i, sum = 0;
  printf("Enter 10 numbers:\n");
  for (i = 0; i < 10; i++) {
    scanf("%d", &num[i]);
    sum = sum + num[i];
  }
  printf("The sum is: %d", sum);
  return 0;
}
