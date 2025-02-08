// #include <stdio.h>

// char* welcome() {
//     return "Welcome to Code Radar!";
// }

// int main() {
//     int a,b;
//     char x;
//     scanf("%d %d %c",&a,&b,&x);
//     switch (x){
//     case '+' : //( x='+'){
//         {
//             printf("%d",a+b);
//             break;
//     }
//     case '-': //( x='-'){
//         {
//         printf("%d",a-b);
//         break;
//     }
//     case '*': //( x='*')
//     {
//         printf("%d",a*b);
//         break;
//     }
//     case '/' : //( x="/")
//     {
//         printf("%d",a/b);
//         break;
//     }}
//     return 0;
// }
#include <stdio.h>

int main() {
    char op;
    double num1, num2;
    
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    switch(op) {
        case '+':
            printf("Result: %.2lf\n", num1 + num2);
            break;
        case '-':
            printf("Result: %.2lf\n", num1 - num2);
            break;
        case '*':
            printf("Result: %.2lf\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %.2lf\n", num1 / num2);
            else
                printf("Error: Division by zero!\n");
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
