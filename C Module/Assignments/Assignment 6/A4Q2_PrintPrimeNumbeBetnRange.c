#include<stdio.h>
void printPrimeNum(int range){
	int i;
	for(i = 2; i <= range; i++){
		int j;
		int isPrime = 1;
		
		for(j = 2; j < i; j++){
			if(i % j == 0) {
				isPrime = 0;
				break;
			}
		}
		
		if(isPrime){
			printf("%d\n", i);
		}
	}
}
void main () {
	int range = 100;
	printPrimeNum(range);
}
