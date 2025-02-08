#include <stdio.h>

int main() {
    // int a,b;
    // scanf("%d %d",&a,&b);
    // a = a & ~(b << (n - 1));

    // printf("%d\n",a);
int a, n;
    scanf("%d %d", &a, &n);
    a = a & ~(1 << (n - 1));
    printf("%d\n", a-1);
    
    return 0;
}
