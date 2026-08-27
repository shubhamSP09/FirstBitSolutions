#include<stdio.h>

void main(){
	int arr[5], i;
	
	for(i = 0; i < 5; i++){
		printf("Enter value at the index %d : ", i);
		scanf("%d", &arr[i]);	
	}
	
	for(i = 0; i < 5; i++){
		printf("%d ", arr[i]);
	} 
	printf("\nEven NUmbers: ");
	for(i = 0; i < 5; i++){
		if(arr[i] % 2 == 0){
			printf("%d ", arr[i]);
		}
	}
	
	printf("\nOdd NUmbers: ");
	for(i = 0; i < 5; i++){
		if(arr[i] % 2 != 0){
			printf("%d ", arr[i]);
		}
	}
}
