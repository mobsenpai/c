// #include <stdio.h>

// FILE *fp;

// struct stud {
//   int roll;
//   char name[20];
// } a; // global variable

// int write() {
//   fp = fopen("recm1.txt", "a");
//   fwrite(&a, sizeof(a), 1, fp);
//   fclose(fp);

//   return 0;
// }

// int read() {
//   fp = fopen("recm1.txt", "r");
//   printf("Roll\tName");
//   while (fread(&a, sizeof(a), 1, fp)) {
//     printf("\n%d\t%s", a.roll, a.name);
//   }
//   fclose(fp);

//   return 0;
// }
// int edit(int i) {
//   struct stud temp;
//   fp = fopen("recm1.txt", "a+");
//   while (fread(&a, sizeof(a), 1, fp)) {
//     if (a.roll == i) {
//       fseek(fp, -sizeof(a), SEEK_CUR);
//       printf("\nEnter roll and name");
//       scanf("%d%s", &temp.roll, temp.name);
//       fwrite(&temp, sizeof(temp), 1, fp);
//       break;
//     }
//   }
//   fclose(fp);

//   return 0;
// }

// int main() {
//   char ch;
//   int i;

//   do {
//     printf("1 to add\n2 to read\n3 to edit\nesc to exit");
//     scanf("%c", &ch);
//     switch (ch) {
//     case '1':
//       printf("enter roll and name");
//       scanf("%d%s", &a.roll, a.name);
//       write();
//       break;
//     case '2':
//       read();
//       break;
//     case '3':
//       printf("Enter roll no to edit");
//       scanf("%d", &i);
//       edit(i);
//       break;
//     case 27:
//       printf("exiting");
//       break;
//     default:
//       printf("\nwrong choice");
//       break;
//     }
//   } while (ch != 27);
//   return 0;
// }

// edited
#include <stdio.h>

FILE *fp;

struct stud {
  int roll;
  char name[20];
} a; // global variable

int write() {
  fp = fopen("recm1.txt", "ab"); // binary append mode
  fwrite(&a, sizeof(a), 1, fp);
  fclose(fp);
  return 0;
}

int read() {
  fp = fopen("recm1.txt", "rb"); // binary read mode
  printf("Roll\tName");
  while (fread(&a, sizeof(a), 1, fp)) {
    printf("\n%d\t%s", a.roll, a.name);
  }
  fclose(fp);
  return 0;
}

int edit(int i) {
  struct stud temp;
  fp = fopen("recm1.txt", "rb+"); // binary read/update mode
  while (fread(&a, sizeof(a), 1, fp)) {
    if (a.roll == i) {
      fseek(fp, -sizeof(a), SEEK_CUR);
      printf("\nEnter roll and name: ");
      scanf("%d%s", &temp.roll, temp.name);
      fwrite(&temp, sizeof(temp), 1, fp);
      break;
    }
  }
  fclose(fp);
  return 0;
}

int main() {
  char ch;
  int i;

  do {
    printf("\n1 to add\n2 to read\n3 to edit\nESC to exit\n");
    printf("Enter your choice: ");
    scanf(" %c", &ch); // space before %c to skip whitespace

    switch (ch) {
    case '1':
      printf("Enter roll and name: ");
      scanf("%d%s", &a.roll, a.name);
      write();
      break;
    case '2':
      read();
      break;
    case '3':
      printf("Enter roll no to edit: ");
      scanf("%d", &i);
      edit(i);
      break;
    case 27: // ESC key
      printf("Exiting\n");
      break;
    default:
      printf("\nWrong choice");
      break;
    }
  } while (ch != 27);
  return 0;
}
