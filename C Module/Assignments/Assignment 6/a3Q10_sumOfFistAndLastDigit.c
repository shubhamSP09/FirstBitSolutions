#include <stdio.h>
int sumOfFirstAndLastDigit(int num){
	int lastDigit, firstDigit;
    int sum;

    lastDigit = num % 10;

    while (num >= 10) {
        num /= 10;
    }

    firstDigit = num;

    sum = firstDigit + lastDigit;

    return sum;
}
int main() {
    int num = 52345;
    printf("%d", sumOfFirstAndLastDigit(num));

}
