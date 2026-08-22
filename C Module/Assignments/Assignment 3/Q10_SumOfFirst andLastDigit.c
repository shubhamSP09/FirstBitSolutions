#include <stdio.h>

int main() {
    int num = 12345;
    int lastDigit, firstDigit;
    int sum;

    lastDigit = num % 10;

    while (num >= 10) {
        num /= 10;
    }

    firstDigit = num;

    sum = firstDigit + lastDigit;

    printf("Sum = %d", sum);

}
