#include <stdio.h>

struct emp {
  int id;
  char name[20];
} e;

int main() {
  FILE *fp;
  printf("Enter Id and name: ");
  scanf("%d%s", &e.id, e.name);

  // write to file
  fp = fopen("emp.txt", "a");
  fprintf(fp, "%d\t%s\n", e.id, e.name);
  fclose(fp);

  // read and print
  fp = fopen("emp.txt", "r");
  printf("\nID\tName");
  while (fscanf(fp, "%d%s", &e.id, e.name) == 2) {
    printf("\n%d\t%s", e.id, e.name);
  }
  fclose(fp);

  return 0;
}
