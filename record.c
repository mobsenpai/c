#include <stdio.h>

struct stud {
  int roll;
  char name[20], prog[10];
};

int main() {
  FILE *fp;
  struct stud s;
  printf("Enter your roll, name and prog: ");
  scanf("%d%s%s", &s.roll, s.name, s.prog);
  fp = fopen("stud.txt", "a");
  fwrite(&s, sizeof(s), 1, fp);
  fclose(fp);

  // read
  fp = fopen("stud.txt", "r");
  // print
  printf("\nRoll\tName\tProgram");
  while (fread(&s, sizeof(s), 1, fp)) {
    printf("\n%d\t%s\t%s", s.roll, s.name, s.prog);
  }
  fclose(fp);
}
