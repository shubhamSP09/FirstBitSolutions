#include<stdio.h>

int main () {
	int num = 5;
	int fact = 1;
	int i;
	
	for(i = 1; i <= num; i++) {
		fact *= i;
		printf("%d fact = %d\n ", i, fact);
	}
}
