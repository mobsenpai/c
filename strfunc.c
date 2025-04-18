#include <stdio.h>

struct emp {
  int eid;
  char name[20];
};

struct emp input(struct emp e) {
  printf("Enter your id: ");
  scanf("%d", &e.eid);
  printf("Enter your name: ");
  scanf("%s", e.name);

  return e;
}

int output(struct emp e) {
  printf("Employee ID: %d", e.eid);
  printf("Name: %s", e.name);

  return 0;
}

int main() {
  struct emp e1;
  e1 = input(e1);
  output(e1);
}
