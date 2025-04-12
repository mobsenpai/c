#include <stdio.h>

int pal(char str[]) {
  int i, j, f = 1;
  for (i = 0; str[i] != '\0'; i++)
    ;
  i--;
  for (j = 0; j <= i; j++, i--) {
    if (str[j] != str[i]) {
      f = 0;
      break;
    }
  }

  return f;
}

int main() {
  char str[100];
  printf("Enter a string: ");
  scanf("%s", str);
  if (pal(str)) {
    printf("%s is a palindrome\n", str);
  } else {
    printf("%s is NOT a palindrome\n", str);
  }
}
