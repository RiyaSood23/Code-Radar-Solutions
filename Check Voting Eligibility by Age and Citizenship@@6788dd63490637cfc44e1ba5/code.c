#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int age,citizen;
    scanf("%d %d",&citizen,&age);
    if (citizen==1){
        if(age>=18){
            printf("Eligible");
        }
        else{
            printf("Not Eligible");
        }
    }
    else {
        printf("Not Eligible");
    }
    return 0;
}