#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    char x;
    scanf("%d %d %c",&a,&b,&x);
    switch (x){
    case '+' : //( x='+'){
        {
            printf("%d",a+b);
            break;
    }
    case '-': //( x='-'){
        {
        printf("%d",a-b);
        break;
    }
    case '*': //( x='*')
    {
        printf("%d",a*b);
        break;
    }
    case '/' : //( x="/")
    {
        printf("%d",a/b);
        break;
    }}
    return 0;
}