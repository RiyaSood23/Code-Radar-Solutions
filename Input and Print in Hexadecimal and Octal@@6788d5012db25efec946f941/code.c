#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   int n;
   scanf("%d",&n);
   printf("Hexadecimal: %X",n);
   printf("Octal: %O",n);
    return 0;
}