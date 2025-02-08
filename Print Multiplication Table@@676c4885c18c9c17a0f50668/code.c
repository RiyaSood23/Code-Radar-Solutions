#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for (i=1; i<=10 ;i++){
        //int mul=n*i;
        printf("%d * %d= %d",n,i,n*i);
    }
    return 0;
}