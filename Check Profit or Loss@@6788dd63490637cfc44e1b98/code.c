#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int cp,sp;
    scanf("%d %d",&sp,&cp);
    if(sp>cp){
        printf("Profit")
    }
    else if(sp==cp){
        printf("No Profit No Loss");
    }
    else{
        printf("Loss");
    }
    return 0;
}