#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a<0 && b<0 || a>0 && b>0){
        printf("Same Sign");
    }
    // else if(a>0 && b>0){
    //     printf("Positive");
    // }
    else{
        printf("Different Sign");
    }
    return 0;
}