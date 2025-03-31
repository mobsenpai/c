#include <stdio.h>
int main() {
  char str1[20], str2[20];
  int i, j;
  printf("Enter a string: ");
  scanf("%d", &str1);
  for (i = 0; str1[i] != '\0'; i++)
    ;
  i--;
  for (j = 0; i != 0; j++) {
    str2[j] = str1[i];
    i--;
  }
  str2[j] = '\0';
  printf("Rev: %s", str2);
  return 0;
}
