#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   int n;
   scanf("%d",&n);
   printf("Hexadecimal: %X",n);// X is for hexa and o is for octa
   printf("\nOctal: %o",n);
    return 0;
}