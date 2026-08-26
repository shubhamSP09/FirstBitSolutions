#include <stdio.h>

int isPerfect(int *n)
{
    int sum = 0;

    for (int i = 1; i < *n; i++)
    {
        if (*n % i == 0)
        {
            sum = sum + i;
        }
    }

    return sum == *n;
}

int main()
{
    int n;

    printf("Enter number: ");
    scanf("%d", &n);

    if (isPerfect(&n))
        printf("Perfect number");
    else
        printf("Not a Perfect number");

    return 0;
}
