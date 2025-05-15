#include <stdio.h>

int palind(char str[]) {
  int i, j = 0;
  for (i = 0; str[i] != '\0'; i++)
    ;
  i--; // important
  while (i >= j) {
    if (str[i] != str[j]) {
      return 0;
    }
    i--;
    j++;
  }

  return 1;
}

int main() {
  char str[10];
  printf("Enter string");
  scanf("%s", str);
  int r = palind(str);
  if (r) {
    printf("Palindrome");
  } else {
    printf("Not Palindrome");
  }
}
