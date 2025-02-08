#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // int x,i;
    // scanf("%d %d",&x,&i);
    // // int bit=(a>>b)&0;
    // // printf("%d",bit);
    // int mask=1<<(i-1);
    // x=x|mask;
    // printf("%d",x);
     int x;
    int i;
    scanf("%d %d",&x,&i);
    int mask=1<<(i-1);
    x=x|mask;
    printf("%d",x);
    return 0;
}