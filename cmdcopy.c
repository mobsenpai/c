#include <stdio.h>

int main(int argc, char *argv[]) {
  FILE *fp1, *fp2;
  char ch;
  int c = 0, w = 0, l = 0;
  if (argc != 3) {
    printf("Parameter mismatch");
  } else {
    printf("Copying!\n");
    fp1 = fopen(argv[1], "r");
    fp2 = fopen(argv[2], "w");

    while (!feof(fp1)) {
      ch = fgetc(fp1);
      fputc(ch, fp2);
      printf("%c", ch);

      // characters count
      c++;

      // words count
      if (ch == ' ') {
        w++;
      }

      // lines count
    }

    fclose(fp1);
    fclose(fp2);

    printf("Characters copied: %d\n", c);
    printf("Words copied: %d\n", w);
    printf("Lines copied: %d\n", l);
  }
}
