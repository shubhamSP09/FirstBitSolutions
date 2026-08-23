#include<stdio.h>

void areaOfCircle() {
	float pi = 3.14;
	int r = 13;
	float area = pi * (r * r);
	printf("Area of circle is %.2f", area);
}
int main () {
	areaOfCircle();	
}
