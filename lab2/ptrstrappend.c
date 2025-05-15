#include <stdio.h>

char *append(char *p, char *q, char *r) {
  char *start = r; // pointer to pointer? => pointer start and r both point to
                   // the variable str3
  while (*p != '\0') {
    *r = *p;
    p++;
    r++;
  }
  while (*q != '\0') {
    *r = *q;
    q++;
    r++;
  }

  *r = '\0'; // null terminate the result

  return start; // we can use return aswell
}

int main() {
  char str1[10], str2[10], str3[20];
  printf("two string: ");
  scanf("%s%s", str1, str2);
  append(str1, str2, str3);

  printf("%s\n", str3);                     // 1st way
  printf("%s\n", append(str1, str2, str3)); // 2nd way
}
