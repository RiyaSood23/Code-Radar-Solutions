#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,i,j;
    scanf("%d",&n);
    for (i=n;i>=1;i--){
        for (j=1;j<=i;j++){
            printf("*\n");
        }
    }
    return 0;
}