#include <stdio.h>

int sort(int arr[], int size) {
  int i;
  int min;
  int j;
  int temp;
  for (i = 0; i < size - 1; i++) {
    min = i;
    for (j = i + 1; j < size; j++) {
      if (arr[j] > arr[i]) {
        min = j;
      }
    }

    temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }

  return 0;
}

int main() {}
