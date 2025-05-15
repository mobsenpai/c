#include <stdio.h>

int main() {
  int i, j, k;
  int r1 = 2, c1 = 1, r2 = 1, c2 = 1;
  int m1[20][20] = {{1}, {2}}, m2[20][20] = {{1}}, result[20][20];
  // printf("Enter rows & columns of matrix 1: ");
  // scanf("%d%d", &r1, &c1);
  // printf("Enter rows and columns of matrix 2: ");
  // scanf("%d%d", &r2, &c2);

  if (r1 != c2) {
    printf("Not possible");
  } else {
    // printf("Enter elements of m1: ");
    // printf("Enter elements of m2: ");
    for (i = 0; i < r1; i++) {
      for (j = 0; j < c2; j++) {
        for (k = 0; k < c1; k++) {
          result[i][j] = result[i][j] + m1[i][k] * m2[k][j];
        }
      }
    }
  }
}
