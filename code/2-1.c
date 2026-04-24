#include <stdio.h>

int main() {
  char arr[] = "hello";
  char* p = "hello";

  arr[0] = 'H';
  printf("%s\n", arr);

  *p = 'H';
  printf("%s\n", p);

  return 0;
}
