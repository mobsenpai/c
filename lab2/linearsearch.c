#include <stdio.h>

int search(int arr[], int size, int target) {
  int i;
  for (i = 0; i < size; i++) {
    if (arr[i] == target) {
      return i;
      // break; no need for break as return exits the entire function
    }
  }

  return -1;
}

int main() {
  int arr[3], i;
  int size = sizeof(arr) / sizeof(arr[0]);
  printf("Enter elements (integers): ");
  for (i = 0; i < size; i++) {
    scanf("%d", &arr[i]);
  }

  int r = search(arr, size, 5);
  if (r != -1) {
    printf("found at %d", r);
  } else {
    printf("not found");
  }
}
