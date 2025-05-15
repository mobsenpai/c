#include <stdio.h>

int max(int arr[], int size) {
  int i, max = arr[0];
  for (i = 0; i < size; i++) {
    if (arr[i] >= max) {
      max = arr[i];
    }
  }

  return max;
}
int min(int arr[], int size) {
  int i, min = arr[0];
  for (i = 0; i < size; i++) {
    if (arr[i] <= min) {
      min = arr[i];
    }
  }

  return min;
}
int main() {
  int arr[] = {0, 10, 15, 5, 2, 10};
  int size = sizeof(arr) / sizeof(arr[0]);
  int small = min(arr, size), big = max(arr, size);
  printf("min: %d\n", small);
  printf("max: %d\n", big);
}
