#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,i;
    int sum=0;
    int count =1;
    scanf("%d",&n);
    for (i=0;i<=n;i++){
        sum+=i;
        count+=1;

    }
    printf("%d",sum);
    return 0;
}