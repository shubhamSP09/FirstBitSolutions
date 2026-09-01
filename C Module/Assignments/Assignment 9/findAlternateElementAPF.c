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

void findAlternateElement(int *arr, int size, int i){
	printf("\nAlternate element : ");
	for(i = i; i < 5; i += 2){
		printf("%d ", arr[i]);
//		i++;
	}
}

void main() {
	int size = 5;
	int arr[size];
	int i = 1;
	createArray(arr, size);
	findAlternateElement(arr, size, i);
}
