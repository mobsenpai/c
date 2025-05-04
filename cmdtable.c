#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int i;
  for (i = 1; i <= 10; i++) {
    printf("%s x %d = %d\n", argv[1], i, atoi(argv[1]) * i);
  }
}
