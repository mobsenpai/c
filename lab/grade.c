#include <stdio.h>
int main() {
  int maths, c, eng, os, sad, total, avg;
  printf("Enter marks of Maths, C, English, Operation system & Unix, System "
         "analysis & Design: ");
  scanf("%d%d%d%d%d", &maths, &c, &eng, &os, &sad);
  total = maths + c + eng + os + sad;
  avg = total / 5;
  if (maths >= 30 && c >= 30 && eng >= 30 && os >= 30 && sad >= 30) {
    if (avg >= 75) {
      printf("Distinction");
    } else if (avg >= 60 && avg < 75) {
      printf("First division");
    } else if (avg >= 40 && avg < 60) {
      printf("Second division");
    } else if (avg >= 30 && avg < 45) {
      printf("Pass");
    } else {
      printf("Fail");
    }
  } else {
    printf("Failed in one or more papers");
  }
}
