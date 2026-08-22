#include<stdio.h>

void main () {
	int num = 153;
	int num_copy = num;
	int sum = 0;
	int rem;
	int i;
	
	for(i = num; num > 0;) {
		rem = num % 10;
		sum += rem * rem * rem;
		num /= 10;
	}
	
	if(sum == num_copy) {
		printf("Armstrong Number");
	} else {
		printf("Not Armstrong number");
	}
}
