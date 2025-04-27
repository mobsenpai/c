#include <stdio.h>

struct stud {
  int roll;
  char name[20];
  char course[20];
};

int main() {
  FILE *fp;
  struct stud s;
  printf("Enter Name & roll no: ");
  scanf("%s%d", s.name, &s.roll);
  printf("Enter Course: ");
  scanf("%s", s.course);

  // to file
  fp = fopen("table.txt", "w");
  fputs("Roll Name Course\n", fp);
  fprintf(fp, "%d %s %s", s.roll, s.name, s.course);
  fclose(fp);
}
