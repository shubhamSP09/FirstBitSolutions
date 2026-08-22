#include<stdio.h>
int main () {
	int a = 10;
	int b = 20;
	printf("Before swap, the value of A is %d and value of B is %d", a, b);
	
	int temp = a;
	a = b;
	b = temp;
	printf("\nAfter swap, the value of A is %d and value of B is %d", a, b);
}
