#include <stdio.h>

int main() {

  char* names[] = {"apple", "mango", "ant", "banana", "cat", "anaconda"};
  int n = sizeof(names)/sizeof(names[0]);
 for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            
            char* s1 = names[j];
            char* s2 = names[j + 1];

            int k = 0;
            while (s1[k] != '\0' && s1[k] == s2[k]) {
                k++;
            }
            if ((unsigned char)s1[k] > (unsigned char)s2[k]) {
                char* temp = names[j];
                names[j] = names[j + 1];
                names[j + 1] = temp;
            }
        }
    }
  for (int i = 0; i < n; i++) {
     printf("%s\n", names[i]);
  }

  return 0;
}
