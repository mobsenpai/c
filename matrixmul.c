#include <stdio.h>

int main() {
  int m1[100][100], m2[100][100], r[100][100], i, j, r1, c1, r2, c2;
  printf("(matrix 1) Enter no of rows and columns:\n");
  scanf("%d%d", &r1, &c1);
  printf("(matrix 2) Enter no of rows and columns:\n");
  scanf("%d%d", &r2, &c2);

  // input logic
  printf("(matrix 1) Enter elements:\n");
  for (i = 0; i < r1; i++) {
    for (j = 0; j < c1; j++) {
      scanf("%d", &m1[i][j]);
    }
  }
  printf("(matrix2) Enter elements:\n");
  for (i = 0; i < r2; i++) {
    for (j = 0; j < c2; j++) {
      scanf("%d", &m2[i][j]);
    }
  }

  // multiplication logic
  if (r1 == c2) {
    printf("Legal to multiply\n");
    for (i = 0; i < r1; i++) {
      for (j = 0; j < c2; j++) {
        r[i][j] += m1[i][j] * m2[i][j];
      }
    }

    // result
    printf("Resultant matrix:\n");
    for (i = 0; i < r1; i++) {
      for (j = 0; j < c2; j++) {
        printf("%d ", r[i][j]);
      }
      printf("\n");
    }
  } else {
    printf("Can't multiply\n");
  }
}
