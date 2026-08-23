#include<stdio.h>
int isPerfect(int num){
	int sum = 0, i;
	
	for(i = 1; i < num; i++) {
		if(num % i == 0) {
			sum += i;
		}
	}
	
	if(sum == num) {
		printf("Perfect number");
	}else{
		printf("Not perfect number");
	}
}
int main () {
	int num = 28;
	isPerfect(num);
}
