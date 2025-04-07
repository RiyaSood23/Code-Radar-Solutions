// Your code here...
#include <stdio.h>

int main() {
    int n ; 
    scanf("%c",&n);
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n - i; s++) {
            printf(" ");
        }
        char ch = 'A';
        for (int j = 1; j <= i; j++) {
            printf("%c ", ch);
            ch++;
        }

        printf("\n");
    }

    return 0;
}


