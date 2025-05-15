#include <stdio.h>

int rev(int n) {
  int t, r, result = 0;
  t = n;
  while (t > 0) {
    r = t % 10;
    result = (result * 10) + r;
    t = t / 10;
  }

  return result;
}

int main() {}
