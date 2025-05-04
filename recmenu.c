#include <stdio.h>
FILE *fp;

struct stud {
  int roll;
  char name[20];
} a, b;

int write(struct stud a) {
  fp = fopen("stud2.txt", "a");
  fprintf(fp, "%d\t%s\n", a.roll, a.name);
  fclose(fp);

  return 0;
}

int read() {
  fp = fopen("stud2.txt", "a");
  printf("\nROLL\tNAME");
  fscanf(fp, "%d%s", &a.roll, a.name);
  fclose(fp);

  return 0;
}

int edit(int n) {
  fp = fopen("stud2.txt", "a+");
  while (fscanf(fp, "%d%s", &a.roll, a.name) == 2) {
    if (a.roll == n) {
      fseek(fp, -sizeof(a), SEEK_CUR);
      printf("Enter roll and name: ");
      scanf("%d%s", &b.roll, b.name);
      fprintf(fp, "%d\t%s\n", b.roll, b.name);
      break;
    }
  };
  fclose(fp);

  return 0;
};

int main() {
  char ch;
  int n;
  do {
    printf("\nPress 1 to add record");
    printf("\nPress 2 to print record");
    printf("\nPress 3 to edit record");
    printf("\nPress Esc to exit");
    printf("\nEnter your choice");
    scanf("%c", &ch);
    switch (ch) {
    case '1':
      printf("\nEnter roll and name");
      write(a);
      printf("\nRecord saved successfully");
      break;
    case '2':
      read();
      break;
    case '3':
      printf("\nEnter the roll no to edit");
      scanf("%d", &n);
      edit(n);
      break;
    case 27:
      printf("\nThank you for using my program");
      break;
    default:
      printf("\nWrong input");
      break;
    }

  } while (ch != 27);
  return 0;
}

// NOTE: how to edit
// see recm1.c
