#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int avg;
    avg=(a+b+c)/3;
    printf("Average: ",avg);
    return 0;
}