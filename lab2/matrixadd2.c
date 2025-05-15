#include <stdio.h>
#define MAX 100

int main() {
  int r1, c1;
  int r2, c2;
  int matrix1[MAX][MAX], matrix2[MAX][MAX];
  int sum[MAX][MAX];
  int i, j;
  printf("Enter rows and columns of matrix 1: ");
  scanf("%d%d", &r1, &c1);
  printf("Enter rows and colums of matrix 2: ");
  scanf("%d%d", &r2, &c2);

  if (!(r1 == r2 && c1 == c2)) {
    printf("Addition not possible");
  } else {
    printf("Enter elements of matrix 1: ");
    for (i = 0; i < r1; i++) {
      for (j = 0; j < c1; j++) {
        scanf("%d", &matrix1[i][j]);
      }
    }
    printf("Enter elements of matrix 2: ");
    for (i = 0; i < r2; i++) {
      for (j = 0; j < c2; j++) {
        scanf("%d", &matrix2[i][j]);
      }
    }
    printf("Performing addition\n");
    for (i = 0; i < r1; i++) {
      for (j = 0; j < c1; j++) {
        sum[i][j] = matrix1[i][j] + matrix2[i][j];
      }
    }
    printf("Resultant Matrix\n");
    for (i = 0; i < r1; i++) {
      for (j = 0; j < c1; j++) {
        printf("%d ", sum[i][j]);
      }
      printf("\n");
    }
  }
}
