#include <stdio.h>

int my_strcmp(const char* a, const char* b) {
  
}

int main() {

  printf("%d\n", my_strcmp("abc", "abcd"));
  printf("%d\n", my_strcmp("abc", "abc"));
  printf("%d\n", my_strcmp("c"  , "b"  ));

 return 0;
}
