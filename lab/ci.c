#include <math.h>
#include <stdio.h>
int main() {
  double p, r, t, ci;
  printf("Enter principal amount, rate of interst and time period: ");
  scanf("%lf%lf%lf", &p, &r, &t);
  ci = p * pow((1 + r / 100), t);
  printf("CI: %lf\n", ci);
  printf("Amount with CI: %lf\n", p + ci);
}
