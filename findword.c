#include <stdio.h>

int main() {
  char str[100], a[10];
  int i, j, k, f;
  printf("Enter a string: ");
  fgets(str, 100, stdin);
  printf("Enter a character: ");
  scanf("%s", a);

  for (i = 0; str[i] != '\0'; i++) {
    // first index of a matches the first index of str
    if (str[i] == a[0]) {
      f = 1; // assume match
      for (k = 0, j = i; a[k] != '\0'; k++, j++) {
        if (str[j] != a[k]) {
          f = 0;
          break;
        }
      }
    }
  }

  if (f) {
    printf("Word found at %d", i);
  } else {
    printf("Word not found");
  }
}
