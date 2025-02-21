#include <stdio.h>
int main() {
  char ch;
  printf("Enter any one character: ");
  scanf("%c", &ch);
  if (ch >= 48 && ch <= 57) {
    printf("Number");
  } else if (ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122) {
    printf("Alphabet");
  } else {
    printf("Special character");
  }
}
