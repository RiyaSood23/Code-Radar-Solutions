#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    //left shift <<
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",a<<b);
    
    return 0;
}