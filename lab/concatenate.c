#include <stdio.h>

int main() {
  char str1[20], str2[20], str3[40];
  int i, j, k;
  printf("Enter 2 strings: ");
  scanf("%s%s", str1, str2);
  for (i = 0, k = 0; str1[i] != '\0'; i++, k++) {
    str3[k] = str1[i];
  }
  for (j = 0; str2[j] != '\0'; j++, k++) {
    str3[k] = str2[j];
  }
  printf("%s", str3);
}
