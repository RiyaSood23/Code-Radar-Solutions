#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    int mask=1<<(31);
    scanf("%d",&n);
    if(n & mask){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}