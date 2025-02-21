#include <stdio.h>
int main() {
  double sal, da, hra, ma, gs, tax, net;
  printf("Enter basic salary: ");
  scanf("%lf", &sal);
  da = sal * 0.4;
  hra = sal * 0.3;
  ma = sal * 0.1;
  gs = sal + da + hra + ma;
  printf(
      "\nBasic Salary: %lf \nDA: %lf \nHRA: %lf \nMA: %lf \nGross Salary: %lf",
      sal, da, hra, ma, gs);
  if (gs >= 60000) {
    tax = gs * 0.25;
  } else if (gs >= 40000 && gs < 60000) {
    tax = gs * 0.15;
  } else if (gs >= 30000 && gs < 40000) {
    tax = gs * 0.1;
  } else {
    tax = 0;
  }
  printf("\nTax: %lf", tax);
  net = gs - tax;
  printf("\nNet Salary: %lf", net);
}
