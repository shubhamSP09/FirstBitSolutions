#include <stdio.h>

int main() {
    int num = 121;
    int numCopy = num;
    int reverse = 0;
    int rem;

    while (num > 0) {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num /= 10;
    }

    if (reverse == numCopy) {
        printf("Palindrome Number");
    } else {
        printf("Not Palindrome Number");
    }

}
