#include<stdio.h>
int areaOfTriangle(int b, int h){
	int area = 0.5 * b * h;
	return area;
}
int main () {
	int b = 10;
	int h = 6;
	printf("%d", areaOfTriangle(10, 6));
}
