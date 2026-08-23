#include <stdio.h>
void checkTriangleType(int a, int b, int c){
	if (a == b && b == c) {
        printf("Equilateral Triangle");
    }else if (a == b || b == c || a == c) {
        printf("Isosceles Triangle");
    }else {
        printf("Scalene Triangle");
    }

}
void main() {
    int a = 10;
    int b = 10;
    int c = 20;

    checkTriangleType(a, b, c);
}
