#include <stdio.h>

int main() {
  int num[5], a, i, f;
  printf("Enter 5 numbers: ");
  for (i = 0; i < 5; i++) {
    scanf("%d", &num[i]);
  }
  printf("Enter search num: ");
  scanf("%d", &a);

  for (i = 0; i < 5; i++) {
    if (num[i] == a) {
      f = 1;
      break; // first time only
    }
  }
  if (f) {
    printf("%d found at %d position in array", a, i);
  } else {
    printf("Num not found");
  }
}
