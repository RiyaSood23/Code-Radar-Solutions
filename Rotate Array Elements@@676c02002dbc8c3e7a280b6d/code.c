// Your code here...
#include <stdio.h>

int main() {
    int arr[100], n, k, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    k = k % n;
    int temp[100];
    for (i = 0; i < k; i++) {
        temp[i] = arr[n - k + i];
    }

    
    for (i = n - 1; i >= k; i--) {
        arr[i] = arr[i - k];
    }

    
    for (i = 0; i < k; i++) {
        arr[i] = temp[i];
    }
    for (i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    return 0;
}
