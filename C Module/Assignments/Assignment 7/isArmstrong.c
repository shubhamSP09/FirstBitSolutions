#include<stdio.h>

int isArmstrong(int *n){
	int temp = *n;
	int digit, sum = 0, count = 0;
	
	while(temp != 0){
		count++;
		temp = temp / 10;
	}
	
	temp = *n;
	while(temp != 0){
		digit = temp % 10;
		int power = 1, i;
		for(i = 1; i<= count; i++){
			power = power * digit;
		}
		
		sum += power;
		temp /= 10;
	}
	return sum == *n;
}
void main() {
	int n;
	printf("Enter a value of n: ");
	scanf("%d", &n);
	if(isArmstrong(&n)){
		printf("Armstrong");
	} else {
		printf("Not Armstrong");
	}
}
