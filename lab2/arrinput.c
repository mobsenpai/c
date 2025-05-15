#include <stdio.h>

int main() {
  int arr[5];
  int size, i;
  size = sizeof(arr) / sizeof(arr[0]);
  printf("Enter items: ");
  for (i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  for (i = 0; i < size; i++) {
    printf("%d\n", arr[i]);
  }
}
