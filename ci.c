#include <math.h>
#include <stdio.h>
int main() {
  double p, r, t, ci;
  printf("Enter principal amount, \n rate of interest, \n time period");
  scanf("%lf%lf%lf", &p, &r, &t);
  ci = p * pow((1 + r / 100), t);
  printf("\n Compound interst = %lf", ci);
}
