#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {
  if (argc < 2) return 0;

    for (int i = 1; i < argc - 1; i++) {
        for (int j = 1; j < argc - i; j++) {
     
            char* s1 = argv[j];
            char* s2 = argv[j + 1];
            int k = 0;
            
            while (s1[k] != '\0' && s1[k] == s2[k]) {
                k++;
            }

            if ((unsigned char)s1[k] > (unsigned char)s2[k]) {
                char* temp = argv[j];
                argv[j] = argv[j + 1];
                argv[j + 1] = temp;
            }
        }
    }

  for(int i = 1; i < argc; i++) {
     printf("%s\n", argv[i]);
  }

  return 0;
}
  
