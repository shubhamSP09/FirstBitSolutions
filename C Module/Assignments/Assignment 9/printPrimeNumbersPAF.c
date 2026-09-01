#include<stdio.h>

void createArray(int *arr, int size){
	int i;
	for(i = 0; i < size; i++){
		printf("Enter value at the index %d : ", i);
		scanf("%d", &arr[i]);	
	}
	
	for(i = 0; i < size; i++){
		printf("%d ", arr[i]);
	} 
}

void printPrimeNumbers(int *arr, int size){
	int i, j;
	printf("\nPrime numbers : ");
	
	for(i = 0; i < size; i++){
		int isPrime = 1;
		if(arr[i] <= 1){
			continue;
		}
		for(j = 2; j < arr[i]; j++){
			
			if(arr[i] % j == 0) {
				isPrime = 0;
				break;
			} 
		}
		
		if(isPrime){
			printf("%d ", arr[i]);
		}
	}
}

void main () {
	int size = 5;
	int arr[size];
	
	createArray(arr, size);
	printPrimeNumbers(arr, size);
}
