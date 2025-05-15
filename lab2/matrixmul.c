#include <stdio.h>

int main() {
  int i, j;
  int matrix1[2][3] = {{1, 2, 3}, {4, 5, 6}};
  int matrix2[3][2] = {{1, 2}, {3, 4}, {5, 6}};
  int sum;

  for (i = 0; i < 2; i++) {
    for (j = 0; j < 3; j++) {
      sum[i][j] = matrix1[i][j] * matrix2[j][i];
    }
  }
}
