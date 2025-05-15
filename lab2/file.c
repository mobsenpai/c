#include <stdio.h>

int main() {
  FILE *fp;
  char str[20];
  char store[20];
  printf("Enter string: ");
  fgets(str, sizeof(str), stdin);

  fp = fopen("file.txt", "w");
  fputs(str, fp);
  fclose(fp);

  fp = fopen("file.txt", "r");
  // fscanf(fp, "%s", store);
  fgets(store, sizeof(store), fp);
  fclose(fp);

  printf("%s", store);
}
