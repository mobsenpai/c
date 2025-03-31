#include <stdio.h>
int main() {
  char str1[20], str2[20];
  int i;
  printf("Enter a string: ");
  scanf("%s", str1);
  for (i = 0; str1[i] != NULL; i++) {
    str2[i] = str1[i];
  }
  printf("str1: %s\nstr2: %s\n", str1, str2);
}
