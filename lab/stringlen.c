#include <stdio.h>
int main() {
  int i;
  char str1[20];
  printf("Enter a string: ");
  scanf("%s", &str1);
  for (i = 0; str1[i] != NULL; i++)
    ;
  printf("Length of string: %d", i);
}
