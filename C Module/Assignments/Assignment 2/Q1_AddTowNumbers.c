#include <stdio.h>

int main() {
    int a = 20;
    int b = 10;
    char operator = '+';

    if (operator == '+') {
        printf("Result = %d", a + b);
    }else if (operator == '-') {
        printf("Result = %d", a - b);
    }else if (operator == '*') {
        printf("Result = %d", a * b);
    }else if (operator == '/') {
        printf("Result = %d", a / b);
    }else if (operator == '%') {
        printf("Result = %d", a % b);
    }else {
        printf("Invalid operator");
    }

    return 0;
}
