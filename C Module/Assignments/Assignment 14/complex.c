#include <stdio.h>

struct Complex
{
    float real;
    float imaginary;
};

void main()
{
    struct Complex c;

    printf("Enter Real Part: ");
    scanf("%f", &c.real);

    printf("Enter Imaginary Part: ");
    scanf("%f", &c.imaginary);

    printf("\nComplex Number: %.2f + %.2fi",
           c.real, c.imaginary);
}
