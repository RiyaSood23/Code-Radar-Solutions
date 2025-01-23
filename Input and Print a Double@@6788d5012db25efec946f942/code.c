#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    double p;
    scanf("%lf",&p);
    printf("You entered: %.4lf",p);
    return 0;
}