#include <stdio.h>
int main() {
  double sal, da, ma, hra, gs;
  printf("Enter basic salary: ");
  scanf("%lf", &sal);
  da = sal * 0.4;
  hra = sal * 0.25;
  ma = sal * 0.1;
  gs = sal + da + hra + ma;
  printf("Gross Salary: %lf\n", gs);
}
