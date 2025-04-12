#include <stdio.h>

int comp(char str1[], char str2[]) {
  int i, l1 = 0, l2 = 0;
  for (i = 0; str1[i] != '\0'; i++) {
    l1++;
  }
  for (i = 0; str2[i] != '\0'; i++) {
    l2++;
  }

  if (l1 == l2) {
    return 0;
  } else if (l1 > l2) {
    return 1;
  } else {
    return -1;
  }
}

int main() {
  int r;
  char str1[100], str2[100];
  printf("Enter two strings: ");
  scanf("%s%s", str1, str2);
  r = comp(str1, str2);
  if (r == 0) {
    printf("same length");
  } else if (r == 1) {
    printf("len of 1 gt len of 2");
  } else if (r == -1) {
    printf("len of 2 gt len of 1");
  }
}
