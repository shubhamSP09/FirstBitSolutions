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

void sumOfArrayElemetns(int *arr, int size){
	int sum = 0, i;
	for(i = 0; i < size; i++){
		sum += arr[i];
	}
	
	printf("\n%d", sum);
}
void main() {
	int size = 5;
	int arr[size], i, sum = 0;
	
	createArray(arr, size);
	sumOfArrayElemetns(arr, size);
	
}
