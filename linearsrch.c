#include <stdio.h>

int main() {
  int arr[5], n, i, pos = 0;
  printf("Enter array items:\n");
  for (i = 0; i < 5; i++) {
    scanf("%d", &arr[i]);
  }
  printf("Enter a number:\n");
  scanf("%d", &n);

  for (i = 0; i < 5; i++) {
    if (n == arr[i]) {
      pos = i;
      break;
    }
  }

  if (pos > 0) {
    printf("%d found at %d pos\n", n, pos);
  } else {
    printf("Num not found");
  }
}
