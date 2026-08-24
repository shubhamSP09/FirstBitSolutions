#include <stdio.h>

void checkEvenOdd(int num) {
    if (num % 2 == 0) {
        printf("Even Number.");
    } else {
        printf("Odd Number.");
    }
}

void checkPrime(int num) {
    int i;
    int isPrime = 1;

    if (num <= 1) {
        isPrime = 0;
    }

    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime) {
        printf("Prime Number.");
    } else {
        printf("Not a Prime Number.");
    }
}

void checkPalindrome(int num) {
    int temp = num;
    int rem;
    int rev = 0;

    while (temp > 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }

    if (num == rev) {
        printf("Palindrome Number.");
    } else {
        printf("Not a Palindrome Number.");
    }
}

void checkPositiveNegative(int num) {
    if (num > 0) {
        printf("%d is Positive.", num);
    } else if (num < 0) {
        printf("%d is Negative.", num);
    } else {
        printf("Number is Zero.");
    }
}

void reverseNumber(int num) {
    int temp = num;
    int rem;
    int rev = 0;

    while (temp > 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }

    printf("Original number = %d\n", num);
    printf("Reversed number = %d", rev);
}

void sumOfDigits(int num) {
    int temp = num;
    int sum = 0;
    int rem;

    while (temp > 0) {
        rem = temp % 10;
        sum += rem;
        temp /= 10;
    }

    printf("The sum of all digits of %d is %d", num, sum);
}

int main() {
    int num;
    int selection;

    printf("Enter your number to check: ");
    scanf("%d", &num);

    printf("\nPress----\n");
    printf("1. To check number is even or odd\n");
    printf("2. To check number is prime or not\n");
    printf("3. To check number is palindrome or not\n");
    printf("4. To check number is positive, negative or zero\n");
    printf("5. To reverse a number\n");
    printf("6. To find the sum of digits\n");

    printf("\nEnter your task selection: ");
    scanf("%d", &selection);

    if (selection == 1) {
        checkEvenOdd(num);
    } 
    else if (selection == 2) {
        checkPrime(num);
    } 
    else if (selection == 3) {
        checkPalindrome(num);
    } 
    else if (selection == 4) {
        checkPositiveNegative(num);
    } 
    else if (selection == 5) {
        reverseNumber(num);
    } 
    else if (selection == 6) {
        sumOfDigits(num);
    } 
    else {
        printf("Enter a selection between 1 to 6.");
    }

    
}
