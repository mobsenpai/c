#include <stdio.h>

int upper(char *p) {
  while (*p != '\0') {
    if (*p >= 97 && *p < 122) {
      *p = *p - 32;
    }
    p++;
  }
  return 0;
}

int main() {
  char arr[] = "Ahello";
  upper(arr);
  printf("%s", arr);
  // since we are not using the pointer to print, which is incremented to last
  // address, so we are not reassigning it to the first address, but if we did,
  // we will have to do that.
}

// 48 to 57: numbers
// 97 to 122: small alphabets
// 65 to 90: capital alphabets
