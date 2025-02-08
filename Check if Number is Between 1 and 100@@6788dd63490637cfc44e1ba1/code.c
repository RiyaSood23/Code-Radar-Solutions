#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    if(0<n<101){
        printf("In Range");
    }
    else{
        printf("Out of Range");
    }
    return 0;
}