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

int findMinValue(int *arr, int size){
	int min = arr[0], i;
	for(i = 0; i < size; i++){
		if(arr[i] < min){
			min = arr[i];
		}
	}
	return min;
}

int findMaxValue(int *arr, int size){
	int max = arr[0], i;
	for(i = 1; i < size; i++){
		if(max < arr[i])
			max = arr[i];
	}
	return max;
}

void main() {
	int size = 5;
	int arr[size];
	
	
	createArray(arr, size);
	printf("\nMinimum : %d", findMinValue(arr, size));
	printf("\nMaximum : %d", findMaxValue(arr, size));
	
}
