#include<stdio.h>

int main () {
	int num = 145;
	int numCopy = num;
	int rem, factSum = 0;
	while(num > 0){
		rem = num % 10;
		int i;
		int remFact = 1;
		for(i = 1; i <= rem; i++) {
			remFact *= i;
		}
		factSum += remFact;
		num /= 10;
	}
	
	if(factSum == numCopy){
		printf("Strong Number");
	} else {
		printf("Not Strong Number.");
	}
}
