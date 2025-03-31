// taking and printing 5 inputs
//  #include <stdio.h>

// int main() {
//   int num[5], i;
//   for (i = 0; i < 5; i++) {
//     printf("\nEnter num %d:", i);
//     scanf("%d", &num[i]);
//   }
//   for (i = 0; i < 5; i++) {
//     printf("\n%d", num[i]);
//   }
// }

// taking and sum 10 inputs
#include <stdio.h>

int main() {
  int num[10], i, s;
  for (i = 0; i < 10; i++) {
    printf("\nEnter num %d: ", i);
    scanf("%d", &num[i]);
    s = s + num[i];
  }
  printf("\nSum=%d", s);
}
