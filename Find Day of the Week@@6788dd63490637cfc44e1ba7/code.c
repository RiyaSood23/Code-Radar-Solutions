#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int day;
    scanf("%d",&day);
    switch(day){
        case 1:
        printf("Sunday");
        break;
        case 2:
        printf("Monday\n");
        break;
        case 3:
        printf("Tuesday\n");
        break;
        case 4:
        printf("Wednesday\n");
        break;
        case 5:
        printf("Thursday\n");
        break;
        case 6:
        printf("Friday\n");
        break;
        case 7:
        printf("Saturday\n");
        break;
        default :
        printf("Invalid");

    }
    return 0;
}