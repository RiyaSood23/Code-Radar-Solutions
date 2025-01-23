#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
  char a[30];
  char b[30];
  scanf("%s %s",&a,&b);
  printf("%s and %s",a,b);
    return 0;
}