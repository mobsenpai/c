#include <stdio.h>

struct emp {
  int eid;
  char name[10];
};

struct emp input(struct emp e) {
  printf("Enter your id, name: ");
  scanf("%d%s", &e.eid, e.name);

  return e;
}

int output(struct emp e) {
  printf("id: %d", e.eid);
  printf("name: %s", e.name);
  return 0;
}

int main() {
  struct emp e1;
  e1 = input(e1); // you have to do this, unless using pointer
  output(e1);
}
