#include <stdio.h>

struct Distance
{
    int feet;
    int inch;
};

void main()
{
    struct Distance d;

    printf("Enter Feet: ");
    scanf("%d", &d.feet);

    printf("Enter Inch: ");
    scanf("%d", &d.inch);

    printf("\nDistance: %d feet %d inch", d.feet, d.inch);
}
