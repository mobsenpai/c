// 2D Arrays
#include <stdio.h>

int main() {
  int m1[10][10], m2[10][10], i, j, r1, c1, r2, c2;
  printf("Enter no. of r&c or m1: ");
  scanf("%d%d", &r1, &c1);
  printf("\nEnter no. of r&c of m2: ");
  scanf("%d%d", &r2, &c2);

  for (i = 0; i < r1; i++) {
    printf("\n[matrix1] Enter columns of %d row: ", i);
    for (j = 0; j < c1; j++) {
      scanf("%d", &m1[i][j]);
    }
  }
  for (i = 0; i < r2; i++) {
    printf("\n[matrix2] Enter columns of %d row: ", i);
    for (j = 0; j < c2; j++) {
      scanf("%d", &m2[i][j]);
    }
  }

  if (r1 == c2) {
    printf("Matrix multiplication is possible");
  } else {
    printf("Matrix multiplication not possible");
  }

  return 0;
}
