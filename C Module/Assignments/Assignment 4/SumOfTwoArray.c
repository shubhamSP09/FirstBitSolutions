#include<stdio.h>

void createArray(int *arr, int size){
	int i;
	for(i = 0; i < 5; i++){
		printf("Enter value at the index %d : ", i);
		scanf("%d", &arr[i]);	
	}
}

void displyArray(int *arr, int size){
	int i;
	for(i = 0; i < 5; i++){
		printf("%d ", arr[i]);
	} 
}
void additionOfSameSizeArray(int *arr1, int *arr2, int *newArr){
	int i, j;
	for(i = 0; i < 5; i++){
		newArr[i] = arr1[i] + arr2[i];
	}
}
void main() {
	int arr1[5], arr2[5], arr3[5];
	
	createArray(arr1, 5);
	createArray(arr2, 5);
	
	displyArray(arr1, 5);
	printf("\n");
	displyArray(arr2, 5);
	
	additionOfSameSizeArray(arr1, arr2, arr3);
	
	printf("\nNew Array : ");
	displyArray(arr3, 5);
	
}
