#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    char y;
    scanf("%ch",&y);
    printf("You entered: %ch",y);
    return 0;
}