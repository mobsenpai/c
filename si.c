#include <stdio.h>
int main() {
  float p, r, t, si;
  printf("Enter principal amount, rate of interest, time period");
  scanf("%f%f%f", &p, &r, &t);
  si = (p * r * t) / 100;
  printf("SI = %f", si);
}
