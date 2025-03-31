#include <stdio.h>

int main() {
  char str1[10], str2[10], str3[20], *p = str1, *q = str2, *r = str3;
  int i, j;
  printf("Enter two strings: ");
  scanf("%s%s", p, q); // printing array is similar to pointer

  while (*p != '\0') { // first value of array
    *r = *p;
    p++;
    r++;
  }
  while (*q != '\0') {
    *r = *q;
    q++;
    r++;
  }
  r = str3;
  printf("%s", r);
}
