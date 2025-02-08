#include <stdio.h>

int main() {
    int n, position = 1;

    scanf("%d", &n);

        while ((n & 1) == 0) { // Keep shifting right until we find a set bit
            n >>= 1;
            position++;
        
        printf("%d\n", position);
  
    return 0;
}}
