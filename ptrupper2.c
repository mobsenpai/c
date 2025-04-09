#include <stdio.h>

int main() {
  char str[100], *p;
  int i;
  p = str; // array name itself is the address
  printf("Enter a string: ");
  fgets(p, 100, stdin);
  for (; *p != '\0'; p++) {
    if (*p >= 97 && *p <= 122) {
      *p = *p - 32;
    }
  }
  p = str;
  printf("String in uppercase: %s",
         p); // %s takes the address of array or pointer
  return 0;
}
