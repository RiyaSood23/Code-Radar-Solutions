// Your code here...
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int    j = 1; j <= n - i; j++) {
            printf("  ");
        }
        for (int k = i; k >= 1; k--) {
            printf("%d ", k);
        }
        for (int p = 2; p <= i; p++) {
            printf("%d ", p);
        }

        printf("\n");
    }

    return 0;
}
