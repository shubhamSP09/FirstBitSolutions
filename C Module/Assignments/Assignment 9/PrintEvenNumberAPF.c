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
void printEvenNumber(int *arr, int size){
	int i;
	printf("\nEven NUmbers: ");
	for(i = 0; i < size; i++){
		if(arr[i] % 2 == 0){
			printf("%d ", arr[i]);
		}
	}
}

void printOddNumber(int *arr, int size){
	int i;
	printf("\nOdd NUmbers: ");
	for(i = 0; i < size; i++){
		if(arr[i] % 2 != 0){
			printf("%d ", arr[i]);
		}
	}
}
void main(){
	int size = 5;
	int arr[size];
	createArray(arr, size);
	printEvenNumber(arr, size);
	printOddNumber(arr, size);
}
