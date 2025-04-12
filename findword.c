#include <stdio.h>

int main() {
  char str[100], w[10];
  int i, j, f;
  printf("Enter a string and a word:  ");
  fgets(str, 100, stdin);
  scanf("%s", w);

  for (i = 0; str[i] != '\0'; i++) {
    if (str[i] == w[0]) {
      // first char matches
      f = 1; // assume match
      for (j = 0; w[j] != '\0'; j++) {
        if (str[i + j] == '\0' || str[i + j] != w[j]) {
          f = 0;
          break;
        }
      }
      if (f) {
        printf("Word found at %d index", i);
        return 0;
      }
    }
  }

  printf("Word not found");
  return 0;
}
