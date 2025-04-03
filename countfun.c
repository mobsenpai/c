#include <stdio.h>

int count(char str[], char ch) {
  int count = 0, i;
  while (str[i] != '\0') {
    if (str[i] == ch) {
      count++;
    }
    i++;
  }

  if (count > 0) {
    return count;
  } else {
    return -1;
  }
}
int main() {
  char str[100], ch;
  int r;
  printf("Enter a string: ");
  fgets(str, 100, stdin);
  printf("Enter a char: ");
  scanf("%c", &ch);
  r = count(str, ch);
  if (r != -1) {
    printf("%c is found %d times", ch, r);
  } else {
    printf("%c is not found", ch);
  }
}
