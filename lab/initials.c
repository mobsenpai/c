#include <stdio.h>
int main() {
  char str1[40];
  int i, j;
  printf("Enter a string: ");
  fgets(str1, 40, stdin);
  // printf("%s", str1);
  for (i = 0, j = 0; str1[i] != '\0'; i++) {
    if (str1[i] == 32) {
      printf("%c", str1[j]);
      j = i + 1;
    }
  }
  while (str1[j] != '\0') {
    printf("%c", str1[j]);
    j++;
  }
}
