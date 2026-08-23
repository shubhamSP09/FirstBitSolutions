#include <stdio.h>

caluculation(int a, int b, char operator){
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

}
int main() {
    int a = 20;
    int b = 10;
    char operator = '-';
    caluculation(a, b, operator);
}
