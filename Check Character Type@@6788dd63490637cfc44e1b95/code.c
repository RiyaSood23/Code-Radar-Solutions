#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char n;
    scanf("%c",&n);
    if (n>='A' && n<='Z'|| n>=a && n<=z){
        if(n=='A' || n=='E' || n=='I' || n=='O' || n=='U' || n=='a' || n=='e' || n=='i' || n=='o' || n=='u'){
            printf("Vowel");
        }
        else{
            printf("Consonant");
        }}
    else if(n>=0 && n<=9){
        printf("Digit");
    } 
    else{
        printf("Special Characters");
    }   
    
    return 0;
}