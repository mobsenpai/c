#include <stdio.h>
int main() {
  int n1, n2, n3, min;
  printf("Enter n1, n2 and n3: ");
  scanf("%d%d%d", &n1, &n2, &n3);
  if (n1 < n2 && n1 < n3) {
    min = n1;
  } else if (n2 < n1 && n2 < n3) {
    min = n2;
  } else {
    min = n3;
  }
  while (n1 % min != 0 || n2 % min != 0 || n3 % min != 0) {
    min--;
  }
  printf("HCF: %d", min);
}
