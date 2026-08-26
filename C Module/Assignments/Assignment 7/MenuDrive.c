#include <stdio.h>

int evenOdd(int *n)
{
    if (*n % 2 == 0)
        return 1;
    else
        return 0;
}

int prime(int *n)
{
    if (*n < 2)
        return 0;
	int i;
    for ( i = 2; i < *n; i++)
    {
        if (*n % i == 0)
            return 0;
    }

    return 1;
}

int palindrome(int *n)
{
    int temp = *n;
    int rev = 0;
    int digit;

    while (temp != 0)
    {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp = temp / 10;
    }

    if (rev == *n)
        return 1;
    else
        return 0;
}

void positiveNegative(int *n)
{
    if (*n > 0)
        printf("Positive");
    else if (*n < 0)
        printf("Negative");
    else
        printf("Zero");
}

void reverseNumber(int *n)
{
    int temp = *n;
    int rev = 0;
    int digit;

    while (temp != 0)
    {
        digit = temp % 10;
        rev = rev * 10 + digit;
        temp = temp / 10;
    }

    printf("Reverse = %d", rev);
}

void sumDigits(int *n)
{
    int temp = *n;
    int sum = 0;
    int digit;

    while (temp != 0)
    {
        digit = temp % 10;
        sum = sum + digit;
        temp = temp / 10;
    }

    printf("Sum of digits = %d", sum);
}

int main()
{
    int n, choice;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("\n----- MENU -----\n");
    printf("1. Check Even or Odd\n");
    printf("2. Check Prime or Not\n");
    printf("3. Check Palindrome or Not\n");
    printf("4. Check Positive, Negative or Zero\n");
    printf("5. Reverse a Number\n");
    printf("6. Find Sum of Digits\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        if (evenOdd(&n))
            printf("Even");
        else
            printf("Odd");
    }
    else if (choice == 2)
    {
        if (prime(&n))
            printf("Prime");
        else
            printf("Not Prime");
    }
    else if (choice == 3)
    {
        if (palindrome(&n))
            printf("Palindrome");
        else
            printf("Not Palindrome");
    }
    else if (choice == 4)
    {
        positiveNegative(&n);
    }
    else if (choice == 5)
    {
        reverseNumber(&n);
    }
    else if (choice == 6)
    {
        sumDigits(&n);
    }
    else
    {
        printf("Invalid choice");
    }

    return 0;
}
