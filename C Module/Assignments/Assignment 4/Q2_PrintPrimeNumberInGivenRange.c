#include<stdio.h>

void main() {
	int i, j;
	int range = 100;
	
	for(i = 2; i<range; i++){
		int isPrime = 1;
		for(j=2; j<i; j++){
			if(i % j == 0){
				isPrime = 0;
				break;
			}
		}
		if(isPrime == 1){
			printf("%d ", i);
		}
	}
}
