#include <stdio.h>
#include <stdlib.h> //for atoi

int main(int argc, char *argv[]) {
  int i, s = 0;
  printf("Values received: %d\n", argc);
  printf("Numbers received: %d\n", argc - 1);
  for (i = 1; i < argc; i++) {
    s = s + atoi(argv[i]);
  }
  printf("SUM: %d\n", s);
}
