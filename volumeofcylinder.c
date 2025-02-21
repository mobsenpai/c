#include <stdio.h>
int main() {
  float r, h, vol;
  printf("Enter radius and height: ");
  scanf("%f%f", &r, &h);
  vol = 3.14 * r * r * h;
  printf("Volume = %f", vol);
}
