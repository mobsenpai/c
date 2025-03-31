#include <stdio.h>
int main() {
  char str1[20], str2[20];
  int i, j;
  printf("Enter a string: ");
  scanf("%s", &str1);
  for (i = 0; str1[i] != '\0'; i++)
    ;
  i--;
  for (j = 0; j < i + 1; j++) {
    str2[j] = str1[i];
    i--;
  }
  str2[j] = '\0';
  printf("str1: %s\nstr2: %s", str1, str2);
}
