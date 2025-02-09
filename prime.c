// method 1
// #include <stdbool.h> // Add this for clarity (using true/false)
// #include <stdio.h>

// int main() {
//   int n, j;
//   bool is_prime =
//       true; // Initialize to true, assume it's prime until proven otherwise

//   printf("Enter a number: ");
//   scanf("%d", &n);

//   // Handle special cases
//   if (n <= 1) {
//     is_prime = false; // 0 and 1 are not prime
//   } else {
//     // Optimized primality test: Check divisibility only up to the square
//     root
//     // of n
//     for (j = 2; j * j <= n; j++) {
//       if (n % j == 0) {
//         is_prime = false; // Found a divisor, so it's not prime
//         break;            // Optimization: No need to continue checking
//       }
//     }
//   }

//   if (is_prime) {
//     printf("%d is prime\n", n); // Corrected output
//   } else {
//     printf("%d is not prime\n", n); // Corrected output
//   }

//   return 0;
// }

// method 2
// #include <stdio.h>

// int main() {
//   int n, f;
//   printf("Enter a number: ");
//   scanf("%d", &n);
//   f = 1;
//   if (n <= 1) {
//     f = 0;
//   } else {
//     for (int i = 2; i * i <= n; i++) {
//       if (n % i == 0) {
//         f = 0;
//         break;
//       }
//     }
//   }
//   if (f) {
//     printf("%d is prime", n);
//   } else {
//     printf("%d is not prime", n);
//   }
// }

// method 3 (main)
#include <stdio.h>
int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d", &n);
  int f = 1;
  if (n <= 1) {
    f = 0;
  } else if (n == 2) {
    f = 1;
  } else if (n % 2 == 0) {
    f = 0;
  } else {
    for (int i = 3; i * i <= n; i += 2) {
      if (n % i == 0) {
        f = 0;
        break;
      }
    }
  }

  if (f) {
    printf("%d is prime", n);
  } else {
    printf("%d is not prime", n);
  }
}
