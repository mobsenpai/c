#include <stdio.h>

int main() {
  int i;
  char str[20] = "Hello world";
  FILE *fp;
  fp = fopen("string.txt", "w");
  for (i = 0; str[i] != '\0'; i++) {
    fputc(str[i], fp);
  }

  return 0;
}
