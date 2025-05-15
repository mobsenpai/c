#include <stdio.h>

// int sort(int arr[], int size) {
//   int i, j, min, temp;
//   for (i = 0; i < size - 1; i++) {
//     min = i;
//     for (j = i + 1; j < size; j++) {
//       if (arr[j] < arr[min]) {
//         min = j;
//       }
//     }
//     temp = arr[i];
//     arr[i] = arr[min];
//     arr[j] = temp;
//   }

//   return 0;
// }

int sort(int arr[], int size) {
  int i, j, min, temp;
  for (i = 0; i < size - 1; i++) {
    for (j = i + 1; j < size; j++) {
      if (arr[j] < arr[i]) {
        min = j;
      }
    }
    temp = arr[i];
    arr[i] = arr[min];
    arr[min] = temp;
  }

  return 0;
}

int main() {
  int i;
  int arr[] = {10, 12, 15, 20, 9, 8, 40};
  int size = sizeof(arr) / sizeof(arr[0]);
  sort(arr, size);
  for (i = 0; i < size; i++) {
    printf("%d\t", arr[i]);
  }
}
