#include <stdio.h>

int main() {
  FILE *fp;
  char str[20];
  fp = fopen("f1.txt", "r");
  fgets(str, sizeof(str), fp);
  fclose(fp);

  fp = fopen("f2.txt", "w");
  fputs(str, fp);
  fclose(fp);
}

// need to loop until NULL
