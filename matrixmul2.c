#include <stdio.h>

int main() {
  int a[100][100], b[100][100], c[100][100];
  int arow, acol, brow, bcol;
  int i, j, k, sum = 0;
  printf("Enter rows & columns of matrix A: ");
  scanf("%d%d", &arow, &acol);
  printf("Enter rows and columns of matrix B: ");
  scanf("%d%d", &brow, &bcol);

  if (arow != bcol) {
    printf("Matrices cannot be multiplied\n");
  } else {
    printf("Enter elements of matrix A: ");
    for (i = 0; i < arow; i++) {
      for (j = 0; j < acol; j++) {
        scanf("%d", &a[i][j]);
      }
    }
    printf("Enter elements of matrix B: ");
    for (i = 0; i < brow; i++) {
      for (j = 0; j < bcol; j++) {
        scanf("%d", &b[i][j]);
      }
    }

    for (i = 0; i < arow; i++) {
      for (j = 0; j < bcol; j++) {
        for (k = 0; k < brow; k++) {
          sum = sum + a[i][k] * b[k][j];
        }
        c[i][j] = sum;
        sum = 0;
      }
    }
  }

  printf("Resultant matrix: \n");
  for (i = 0; i < arow; i++) {
    for (j = 0; j < bcol; j++) {
      printf("%d ", c[i][j]);
    }
    printf("\n");
  }
}
