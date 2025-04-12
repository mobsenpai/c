#include <stdio.h>

struct stud {
  int roll, fee;
  char name[20];
  char prog[20];
};

int main() {
  struct stud s;
  printf("Enter roll no: ");
  scanf("%d", &s.roll);
  printf("Enter name and prog: ");
  scanf("%s%s", s.name, s.prog);
  printf("Enter fees: ");
  scanf("%d", &s.fee);

  printf("STUDENT REPORT:\n");
  printf("ROLL: %d\nNAME: %s\nPROG: %s\nFEES: %d", s.roll, s.name, s.prog,
         s.fee);
}
