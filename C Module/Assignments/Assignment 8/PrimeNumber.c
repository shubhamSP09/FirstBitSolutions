#include<stdio.h>

void main () {
	int arr[5], i, j;
	
	for(i = 0; i < 5; i++){
		printf("Enter value at the index %d : ", i);
		scanf("%d", &arr[i]);	
	}
	
	for(i = 0; i < 5; i++){
		printf("%d ", arr[i]);
	} 
	printf("Prime numbers : ");
	
	for(i = 0; i < 5; i++){
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
