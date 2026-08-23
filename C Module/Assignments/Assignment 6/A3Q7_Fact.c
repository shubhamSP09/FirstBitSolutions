#include<stdio.h>

int fact(int num) {
	int fact = 1;
	int i;
	
	for(i = 1; i <= num; i++) {
		fact *= i;
	}
	return fact;
}
int main () {
	int num = 5;
	printf("%d", fact(num));
}
