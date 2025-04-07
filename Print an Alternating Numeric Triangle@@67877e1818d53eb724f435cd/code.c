#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int value;
        if (i % 2 == 0) {
            value = 0;
        } else {
            value = 1;
        }

        for (int j = 1; j <= i; j++) {
            printf("%d ", value);
            value = 1 - value; 
        }

        printf("\n");
    }

    return 0;
}
