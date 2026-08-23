#include<stdio.h>
int isArmstrong(int num){
	int num_copy = num;
	int sum = 0;
	int rem;
	while(num > 0){
		rem = num % 10;
		sum += rem * rem * rem;
		num /= 10;
	}
	
	if(sum == num_copy) {
		return 1;
	} else {
		return 0;
	}
}
int main () {
	int num = 153;
	
	if(isArmstrong(num)) {
		printf("Number is Armstrong");
	} else {
		printf("Not Armstrong number");
	}
}
