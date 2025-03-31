#include <stdio.h>
int main() {
  int maths, phy, che, total, avg;
  printf("Enter marks of Maths, Physics, Chemistry: ");
  scanf("%d%d%d", &maths, &phy, &che);
  total = maths + phy + che;
  avg = total / 3;
  printf("Total marks: %d\n", total);
  printf("Avg marks: %d\n", avg);
}
