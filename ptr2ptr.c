#include <stdio.h>

int main() {
  int var = 12;
  // pointer for var
  int *p = &var;
  // double pointer for pointer p
  int **q = &p;
  printf("Value of var: %d\n", var);
  printf("Value of var using single pointer: %d\n", *p);
  printf("Value of var using double pointer: %d\n", **q);

  return 0;
}
