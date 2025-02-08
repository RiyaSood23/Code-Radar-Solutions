#include <stdio.h>

int main() {
    int n, position = 1;

    scanf("%d", &n);
    if (n!=0){
        while ((n & 1) == 0) { 
            n >>= 1;
            position++;
        
        printf("%d\n", position);
        }
    return 0;
}}
