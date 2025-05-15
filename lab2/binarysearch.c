#include <stdio.h>

int search(int arr[], int size, int target) {
  int low = 0;
  int high = size - 1;

  while (low <= high) {
    int mid = (low + high) / 2;
    if (arr[mid] == target) {
      return mid;
    } else if (arr[mid] < target) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }

  return -1;
}

int main() {
  int arr[] = {2, 5, 10, 15, 16, 20};
  int size = sizeof(arr) / sizeof(arr[0]);

  int r = search(arr, size, 15);
  if (r != -1) {
    printf("Found at %d", r);
  } else {
    printf("Not found");
  }
}
