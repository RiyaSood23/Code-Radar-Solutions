#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char cha;
    scanf("%c",&cha);
    if(cha>='A' && cha<='Z'){
        printf("Uppercase");
    }
    else //if(cha>=a && cha<=z){
       { printf("Lowercase");
    }
    return 0;
}