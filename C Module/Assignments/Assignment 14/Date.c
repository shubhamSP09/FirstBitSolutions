#include <stdio.h>

struct Date
{
    int date;
    int month;
    int year;
};

void main()
{
    struct Date d;

    printf("Enter Date: ");
    scanf("%d", &d.date);

    printf("Enter Month: ");
    scanf("%d", &d.month);

    printf("Enter Year: ");
    scanf("%d", &d.year);

    printf("\nDate: %d/%d/%d", d.date, d.month, d.year);
}
