#include <stdio.h>

int main() {
    int a = 10;
    int b = 10;
    int c = 20;

    if (a == b && b == c) {
        printf("Equilateral Triangle");
    }else if (a == b || b == c || a == c) {
        printf("Isosceles Triangle");
    }else {
        printf("Scalene Triangle");
    }

    return 0;
}
