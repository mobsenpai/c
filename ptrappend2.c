#include <stdio.h>

int main() {
  char str1[100], str2[100], str3[200], *p, *q, *r;
  p = str1;
  q = str2;
  r = str3;
  printf("Enter 1st string: ");
  scanf("%s", p);
  printf("Enter 2nd string: ");
  scanf("%s", q);
  for (; *p != '\0'; p++, r++) {
    *r = *p;
  }
  for (; *q != '\0'; q++, r++) {
    *r = *q;
  }

  r = str3;

  printf("Appended string: %s", r);
  return 0;
}
