#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if ( a+b>c || b+c>a || a+c>b){
    if(a==b==c){
        printf("Equilateral");
    }
    else if(a==b || b==c || a==c){
        printf("Iscoles");
    }
    else{
        printf("Scalene");
    }}
    return 0;
}