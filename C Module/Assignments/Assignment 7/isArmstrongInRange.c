#include <stdio.h>

int isArmstrong(int *n)
{
    int temp = *n;
    int digit, sum = 0, count = 0;

    while (temp != 0)
    {
        count++;
        temp = temp / 10;
    }

    temp = *n;

    while (temp != 0)
    {
        digit = temp % 10;

        int power = 1;
		int i;
        for ( i = 1; i <= count; i++)
        {
            power = power * digit;
        }

        sum = sum + power;
        temp = temp / 10;
    }

    return sum == *n;
}

int main()
{
    int n;

    printf("Enter n: ");
    scanf("%d", &n);

    printf("Armstrong numbers:\n");
	int i;
    for (i = 1; i <= n; i++)
    {
        if (isArmstrong(&i))
        {
            printf("%d ", i);
        }
    }

    return 0;
}
