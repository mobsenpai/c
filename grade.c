#include <stdio.h>
int main() {
  int m, os, sad, c, eng, total, avg;
  printf("Enter marks of Maths, Os, System analysis & design, C, "
         "English: ");
  scanf("%d%d%d%d%d", &m, &os, &sad, &c, &eng);
  total = m + os + sad + c + eng;
  avg = total / 5;
  printf("\nTotal marks: %d \nAvg marks: %d", total, avg);

  if (m >= 30 && os >= 30 && sad >= 30 && c >= 30 && eng >= 30) {
    if (avg >= 75) {
      printf("\nDistinction");
    } else if (avg >= 60 && avg < 75) {
      printf("\nFirst Division");
    } else if (avg >= 45 && avg < 60) {
      printf("\nSecond Division");
    } else if (avg >= 30 && avg < 45) {
      printf("\nPass");
    } else {
      printf("\nFAIL");
    }
  } else {
    printf("\nFailed in one or more subjects");
  }
  return 0;
}
