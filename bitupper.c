#include <stdio.h>

int main() {
  char str[] = "hello";
  int i;
  for (i = 0; str[i] != '\0'; i++) {
    if (str[i] >= 'a' && str[i] <= 'z') {
      str[i] = str[i] & 95;
    }
  }

  printf("UPPER: %s", str);
  return 0;
}
