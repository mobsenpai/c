// prime or not
#include <stdio.h>

// int main() {
//   int n, i, f;
//   printf("Enter a number: ");
//   scanf("%d", &n);
//   // f = 0;
//   // if (n == 0 || n == 1) {
//   //   f = 0;
//   // } else if (n == 2) {
//   //   f = 1;
//   // } else if (n != 2) {
//   //   for (i = 2; i * i <= n; i++) {
//   //     if (n % i == 0) {
//   //       f = 1;
//   //       break;
//   //     }
//   //   }
//   // }
//   // if (f) {
//   //   printf("Not prime");
//   // } else {
//   //   printf("Prime");
//   // }

//   // for (i = 2; i < n; i++) {
//   //   f = 0;
//   //   if (n % i == 0) {
//   //     f = 1;
//   //     break;
//   //   }
//   // }
//   // if (f) {
//   //   printf("Not prime");
//   // } else {
//   //   printf("Prime");
//   // }
// }

// int main() {
//   int i;
//   char str1[20];
//   printf("Enter a string: ");
//   scanf("%s", &str1);
//   for (i = 0; str1[i] != '\0'; i++) // note if i was 1 then this would be
//   wrong
//     ;
//   printf("%d", i);
// }

// copy and rev
int main() {
  int i;
  char str1[20], str2[20];
  printf("ENter a string: ");
  scanf("%s", &str1);
  for (i = 0; str1[i] != '\0'; i++) {
    str2[i] = str1[i];
  }
  printf("\nstr2: %s", str2);
  return 0;
}
