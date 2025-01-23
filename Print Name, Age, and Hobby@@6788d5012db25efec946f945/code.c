#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char name[30],age[30],hobby[30];
    scanf("%s %s \n%s",&name,&age,&hobby);
    printf("Name: %s\n Age: %s\n Hobby: %s",name,age,hobby);
    return 0;
}