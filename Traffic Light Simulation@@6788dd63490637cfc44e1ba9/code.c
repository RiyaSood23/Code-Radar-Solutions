#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char a;
    scanf("%c",&a);
    if (a=='R' || a=='G' || a=='Y'){
    if(a=='R'){
        printf("Stop");
    }
    else if(a=='G'){
        printf("Go");
    }
    else {
        printf("Slow Down");
    }}
    return 0;
}