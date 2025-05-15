#include <stdio.h>

int main() {
  FILE *fp;
  char fname[20];
  printf("Enter file name: ");
  // fgets(fname, sizeof(fname), stdin); includes newline '\n' at the end
  scanf("%s", fname);
  fp = fopen(fname, "w");
  fputs("Hello", fp);
  fclose(fp);
}
