// method 1
// #include <stdio.h>
// int main() {
//   int n;
//   printf("Enter any number: ");
//   scanf("%d", &n);
//   int i, j;

//   for (i = 1; i <= n; i++) {
//     if (n % i == 0) {
//       // Check if current factor is prime
//       int isPrime = 1; // Assume prime

//       // Skip 1 and the number itself for primality check
//       for (j = 2; j < i; j++) {
//         if (i % j == 0 && i != j) {
//           isPrime = 0; // Not prime
//           break;
//         }
//       }

//       // Print factor with primality status
//       printf("Factor: %d - %s\n", i,
//              (isPrime && i > 1) ? "Prime" : "Not Prime");
//     }
//   }

//   return 0;
// }

// method 2 (main)
#include <stdio.h>
int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    if (n % i == 0) {
      int f = 1;
      for (int j = 2; j * j <= i; j++) {
        if (i % j == 0) {
          f = 0;
          break;
        }
      }
      if (f) {
        printf("%d ", i);
      }
    }
  }
  return 0;
}
