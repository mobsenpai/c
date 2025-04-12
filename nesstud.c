#include <stdio.h>

struct prog {
  char course[20];
  int code;
};

struct stud {
  int roll, fees;
  char name[20];
  struct prog p;
};

int main() {
  struct stud s;
  printf("Enter roll & fees: ");
  scanf("%d%d", &s.roll, &s.fees);
  printf("Enter Program name and code: ");
  scanf("%s%d", s.p.course, &s.p.code);

  printf("NAME: %s\n", s.name);
  printf("PROG COURSE: %s\n", s.p.course);
  printf("PROG CODE: %d\n", s.p.code);
}
