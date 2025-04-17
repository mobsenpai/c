#include <stdio.h>

int main() {
  int i;
  FILE *fp;
  fp = fopen("alpha.txt", "w");
  for (i = 97; i <= 122; i++) {
    fputc(i, fp);
  };
  fclose(fp);

  return 0;
}
