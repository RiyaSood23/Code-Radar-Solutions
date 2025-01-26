#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,p;
    scanf("%d %d",&n,&p);
    if(p!=n){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}