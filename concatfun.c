#include <stdio.h>

// 1. no return and modifying the original str1. Note modifying the original
// str1 is not necessary we could also just modify str3 here
// int concat(char str1[], char str2[]) {
//   int i, j;
//   for (i = 0; str1[i] != '\0'; i++)
//     ;
//   for (j = 0; str2[j] != '\0'; j++) {
//     str1[i + j] = str2[j];
//   }
//   return 0;
// }

// int main() {
//   char str1[200], str2[100];
//   printf("Enter 2 strings: ");
//   scanf("%s%s", str1, str2);
//   concat(str1, str2);
//   printf("New str1: %s", str1);
// }

// 2. return
char *concat(char str1[], char str2[], char str3[]) {
  int i, j;
  for (i = 0; str1[i] != '\0'; i++) {
    str3[i] = str1[i];
  }
  // TIPS: one way
  // for (j = 0; str2[j] != '\0'; j++, i++) {
  //   str3[i] = str2[j];
  // }

  // TIPS: another way
  for (j = 0; str2[j] != '\0'; j++) {
    str3[i + j] = str2[j];
  }

  return str3; // TIPS: because we can't return a local address. We could
               // also
               // just not return this as anyway the original str3 will get
               // modified
}

int main() {
  char str1[100], str2[100], str3[200], *r;
  printf("Enter two strings: ");
  scanf("%s%s", str1, str2);

  r = concat(str1, str2, str3);
  printf("Concat: %s", r);
}

// NOTE: here one canno't return an address of a local variable in c. One can
// return a value but not the address.

// 3 sir's method using a separate pointer. This is really unnecessary and
// invalid code
// char *append(char str[], char str2[]) {
//   int i, j;
//   char *p;
//   for (i = 0; str[i] != '\0'; i++) {
//     *p = str[i];
//     p++;
//   }
//   for (j = 0; str2[j] != '\0'; j++) {
//     *p = str2[j];
//     p++;
//   }

//   return p;
// }

// int main() {
//   char s1[20], s2[20], *ptr;
//   printf("Enter 2 strings: ");
//   scanf("%s%s", s1, s2);
//   ptr = append(s1, s2);
//   printf("Append string=%s", ptr);
// }
