#include <stdio.h>

int main() {
  char str[20], *p;
  p = str;

  printf("Enter a string: ");
  scanf("%s", p);

  while (*p != '\0') {
    if (*p >= 'a' && *p <= 'z') {
      *p = *p - 32;
    }
    p++;
  }

  p = str; // making p comeback from \0 to start of string

  printf("%s", p); // understand this - somehow array decays into pointer so
                   // this is how it works idk
}
