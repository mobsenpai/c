#include <stdio.h>
int main() {
  int a1, b1, c1; // sides of triangle 1
  int A1, B1, C1; // angles of triangle 1
  int a2, b2, c2; // sides of triangle 2
  int A2, B2, C2; // angles of triangle 2

  printf("Enter sides of triangle1: ");
  scanf("%d%d%d", &a1, &b1, &c1);
  printf("Enter angles of triangle1: ");
  scanf("%d%d%d", &A1, &B1, &C1);

  printf("Enter sides of triangle2: ");
  scanf("%d%d%d", &a2, &b2, &c2);
  printf("Enter angles of triangle2: ");
  scanf("%d%d%d", &A2, &B2, &C2);

  // SSS
  if (a1 == a2 && b1 == b2 && c1 == c2 || a1 == b2 && b1 == c2 && c1 == a2 ||
      a1 == c2 && b1 == a2 && c1 == b2) {
    printf("The triangles are congruent by SSS");
  }

  // SAS
  else if (a1 == a2 && A1 == A2 && b1 == b2 ||
           a1 == b2 && B1 == B2 && b1 == c2 ||
           c1 == a2 && C1 == C2 && a1 == b2) {
    printf("The triangles are congruent by SAS");
  }

  // ASA
  else if (A1 == A2 && a1 == a2 && B1 == B2 ||
           B1 == B2 && b1 == b2 && C1 == C2 ||
           C1 == C2 && c1 == c2 && A1 == A2) {
    printf("The triangles are congruent by ASA");
  }

  // AAS
  else if (A1 == A2 && B1 == B2 && c1 == c2 ||
           B1 == B2 && C1 == C2 && a1 == a2 ||
           C1 == C2 && A1 == A2 && b1 == b2) {
    printf("The triangles are congruent by AAS");
  }

  else {
    printf("The triangles are not congruent");
  }
  return 0;
}
