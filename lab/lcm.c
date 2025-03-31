#include <stdio.h>
int main() {
  int n1, n2, n3, max;
  printf("Enter n1, n2 and n3: ");
  scanf("%d%d%d", &n1, &n2, &n3);
  if (n1 > n2 && n1 > n3) {
    max = n1;
  } else if (n2 > n1 && n2 > n3) {
    max = n2;
  } else {
    max = n3;
  }
  while (max % n1 != 0 || max % n2 != 0 || max % n3 != 0) {
    max++;
  }
  printf("LCM: %d", max);
}
