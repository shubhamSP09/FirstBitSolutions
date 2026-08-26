#include <stdio.h>

int factorial(int *n)
{
    int fact = 1;

    for (int i = 1; i <= *n; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int isStrong(int *n)
{
    int temp = *n;
    int sum = 0;
    int digit;

    while (temp != 0)
    {
        digit = temp % 10;
        sum = sum + factorial(&digit);
        temp = temp / 10;
    }

    return sum == *n;
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if (isStrong(&n))
        printf("Strong number");
    else
        printf("Not a Strong number");

    return 0;
}
