// pointer
#include <stdio.h>

int main() {
  int age = 19;
  int *pAge = &age;

  printf("address of age: %p\n", &age);
  printf("value of age: %d\n", age);

  printf("value of pAge: %p\n", pAge);
  printf("value stored at address: %d\n", *pAge);
  printf("What is this: %d\n", pAge);

  // string
  char str[20] = "hello";
  char *pStr = &str; // pointer to the first element of array

  char(*p)[20] = &str; // pointer to the entire array

  printf("value of str: %s\n", str);
  printf("value stored at address pStr: %c\n", *pStr);

  printf("value stored at address p: %s", *p);
  printf("what is this: %s", pStr);

  // general
  int x;
  int *q = &x;
  int y = *q; // y is set to the value pointed by q, which is x. hence y = x;
}
