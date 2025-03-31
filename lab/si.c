#include <stdio.h>
int main() {
  double p, r, t, si;
  printf("Enter principal amount, rate of interest and time period: ");
  scanf("%lf%lf%lf", &p, &r, &t);
  si = (p * r * t) / 100;
  printf("SI: %lf\n", si);
  printf("Amount with interst: %lf\n", p + si);
}
