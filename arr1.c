#include <stdio.h>
int main() {
  int num[] = {10, 20};

  printf("%d", num); // will display the pointer
  printf("%d", num[0]);

  char grades[] = {'A', 'B', 'C', 'D'};
  for (int i = 0; i <= 5; i++) {
    printf("\n%c", grades[i]);
  }

  return 0;
}
