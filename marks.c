#include <stdio.h>
int main() {
  int p, c, m, total, avg;
  printf("Enter marks of phy, che, maths: ");
  scanf("%d%d%d", &p, &c, &m);
  total = p + c + m;
  avg = total / 3;
  printf("Total marks = %d", total);
  printf("Average marks = %d", avg);
}
