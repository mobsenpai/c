#include <stdio.h>

FILE *fp;

struct stud {
  int roll;
  char name[20];
};

int main() {
  struct stud s;
  printf("roll and name");
  scanf("%d%s", &s.roll, s.name);
  fp = fopen("rec3.txt", "a");
  fprintf(fp, "%d\t%s\n", s.roll, s.name);
  fclose(fp);

  fp = fopen("rec3.txt", "r");
  printf("Roll\tname\n");
  while (fscanf(fp, "%d%s", &s.roll, s.name) == 2) {
    printf("%d\t%s\n", s.roll, s.name);
  }
  fclose(fp);
}
