#include <stdio.h>

int main() {
  int i, j;
  int r = 2;
  int c = 2;
  int matrix1[2][2] = {{1, 2}, {4, 5}};
  int matrix2[r][c];
  int sum[r][c];
  for (i = 0; i < r; i++) {
    printf("Enter elements %d row: ", i);
    for (j = 0; j < c; j++) {
      scanf("%d", &matrix2[i][j]);
    }
  }

  // adding matrix1 and matrix2
  for (i = 0; i < r; i++) {
    for (j = 0; j < c; j++) {
      sum[i][j] = matrix1[i][j] + matrix2[i][j];
      printf("%d\t", sum[i][j]);
    }
    printf("\n");
  }
}
