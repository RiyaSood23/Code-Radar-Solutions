// Your code here...
#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    // printf("%s", welcome());
    int n,num=1;
    scanf("%d",&n);
    for(int i = 1; i <=n;i++){
        for(int j = 1; j<= i; j++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}