#include <stdio.h>
int main() {
  float sal, da, hra, ma, total, gross;
  printf("Enter basic salary: ");
  scanf("%f", &sal);
  da = sal * 0.4;
  hra = sal * 0.25;
  ma = sal * 0.1;
  gross = sal + da + hra + ma;
  printf("\n DA = %f \n HRA = %f \n MA = %f ", da, hra, ma);
  printf("\n Gross salary = %f", gross);

  return 0;
}
