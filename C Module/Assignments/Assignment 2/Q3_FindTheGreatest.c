#include<stdio.h>

int main () {
	int a = 20;
	int b = 10;
	int c = 30;
	
	if(a > b && a > c) {
		printf("a is greatest number");
	}else if (b > a && b > c) {
		printf("b is greatest number");
	}else {
		printf("c is greatest number");
	}
}
