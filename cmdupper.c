#include <stdio.h>

int main(int argc, char *argv[]) {
  FILE *fp;
  char ch;
  fp = fopen(argv[1], "w+");
  while (!feof(fp)) {
    ch = fgetc(fp);
    if (ch <= 97 && ch >= 122) {
    }
  }
  return 0;
}

// TODO
