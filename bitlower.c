#include <stdio.h>

int main() {
  char str[] = "heLLo";
  int i;
  for (i = 0; str[i] != '\0'; i++) {
    if (str[i] >= 65 && str[i] <= 90) {
      str[i] = str[i] | 32;
    }
  }

  printf("UPPER: %s", str);
  return 0;
}
