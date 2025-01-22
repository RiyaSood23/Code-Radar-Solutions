#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char y[20];
    scanf("%s",&y);
    printf("You entered: %s",y);
    return 0;
}