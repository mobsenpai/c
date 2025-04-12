#include <stdio.h>

// 1st way (no return)
// int upper(char str[]) {
//   int i;
//   for (i = 0; str[i] != '\0'; i++) {
//     if (str[i] >= 97 && str[i] <= 122) {
//       str[i] = str[i] - 32;
//     }
//   }

//   return 0;
// }

// int main() {
//   char str[100];
//   printf("Enter a string: ");
//   fgets(str, 100, stdin);
//   printf("Before modification: %s", str);
//   upper(str);
//   printf("After modification: %s", str);
// }

// 2nd way (return)
char *upper(char str[]) {
  int i;
  for (i = 0; str[i] != '\0'; i++) {
    if (str[i] >= 97 && str[i] <= 122) {
      str[i] = str[i] - 32;
    }
  }

  return str;
}

int main() {
  char str[100], *up;
  printf("Enter a string: ");
  fgets(str, 100, stdin);
  up = upper(str);
  printf("Modified string: %s", up);
}
