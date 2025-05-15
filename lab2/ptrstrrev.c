#include <stdio.h>

int rev(char *p, char *q) {
  int len = 0;
  for (; *p != '\0'; p++, len++)
    ;
  p--;
  while (len > 0) {
    *q = *p;
    p--;
    q++;
    len--;
  }
  *q = '\0';

  return 0;
}

int main() {
  char str1[10] = "hello", str2[10];
  rev(str1, str2);
  printf("%s\n", str2);
}
