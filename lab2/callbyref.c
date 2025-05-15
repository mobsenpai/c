#include <stdio.h>

int inc(int *p) {
  *p = *p + 1;
  return *p;
}

int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  // inc(&n);
  // printf("%d", n);       // 1st way
  printf("%d", inc(&n)); // 2nd way
}
