#include <stdio.h>

int Armstrong(int num) {
    int sum = 0;
    int rem;
    int original = num;

    while (num > 0) {
        rem = num % 10;
        sum += rem * rem * rem;
        num /= 10;
    }

    if (sum == original) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int num = 153;

    if (Armstrong(num)) {
        printf("Armstrong Number");
    } else {
        printf("Not Armstrong Number");
    }

    return 0;
}
