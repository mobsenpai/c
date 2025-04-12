#include <stdio.h>

int main() {
  char str[100], rev[100], *p, *q;
  p = str;
  q = rev;
  printf("Enter a string: ");
  scanf("%s", p);
  for (; *p != '\0'; p++)
    ;
  p--;

  for (; p >= str; p--, q++) {
    *q = *p;
  }

  q = rev; // bring q to the first index
  printf("REV: %s", q);
}
// NOTE:  p >= str means, p is at the last index (lets say 5) and str means the
// first index (0), so 5>=0 true then p--
