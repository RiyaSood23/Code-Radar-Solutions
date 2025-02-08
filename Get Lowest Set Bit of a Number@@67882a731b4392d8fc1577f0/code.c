#include <stdio.h>

int main() {
    int n, position = 1;

    scanf("%d", &n);

        while ((n & 1) == 0) { 
            n >>= 1;
            position++;
        
        printf("%d\n", position);
  
    return 0;
}}
