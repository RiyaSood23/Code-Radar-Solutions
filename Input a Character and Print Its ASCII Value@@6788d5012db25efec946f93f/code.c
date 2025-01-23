#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    //printf("%s", welcome());
    int n;
    scanf("%c",&n);
    printf("ASCII Value: %d",n);
    return 0;
}