#include <stdio.h>

int main() {
  int n, *p;
  p = &n;
  printf("Enter a number: ");
  scanf("%d", p);
  printf("Number input = %d", *p);
  return 0;
}
