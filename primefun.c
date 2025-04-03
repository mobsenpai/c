// function to check prime or not
#include <stdio.h>

int isprime(int n) {
  int i, f = 1;
  if (n < 2) {
    f = 0;
  } else if (n == 2) {
    f = 1;
  } else {
    for (i = 2; i * i <= n; i++) {
      if (n % i == 0) {
        f = 0;
        break;
      }
    }
  }

  return f;
}

// int main() {
//   int n, f;
//   printf("Enter a number: ");
//   scanf("%d", &n);
//   f = isprime(n);
//   if (f) {
//     printf("%d is prime", n);
//   } else {
//     printf("%d is not prime", n);
//   }
// }

// mod1: prime upto n
int main() {
  int n, f, i;
  printf("Enter a number: ");
  scanf("%d", &n);
  for (i = 2; i <= n; i++) {
    f = isprime(i);
    if (f) {
      printf("%d is prime\n", i);
    }
  }
}
