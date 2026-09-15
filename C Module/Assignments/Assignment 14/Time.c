#include <stdio.h>

struct Time
{
    int hour;
    int min;
    int sec;
};

void main()
{
    struct Time t;

    printf("Enter Hour: ");
    scanf("%d", &t.hour);

    printf("Enter Minute: ");
    scanf("%d", &t.min);

    printf("Enter Second: ");
    scanf("%d", &t.sec);

    printf("\nTime: %d:%d:%d", t.hour, t.min, t.sec);
}
