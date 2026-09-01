#include<stdio.h>

void createArray(int *arr, int size){
	int i;
	for(i = 0; i < size; i++){
		printf("Enter value at the index %d : ", i);
		scanf("%d", &arr[i]);	
	}
}

void printArray(int *arr, int size){
	int i;
	for(i = 0; i < size; i++){
		printf("%d ", arr[i]);
	} 
}

sortArray(int *arr, int n){
	int i, j;
	for(i = 0; i < n-1; i++){
		int swap = 0;
		int isSorted = 1;
		for(j = 0; j < n - 1 - i; j++){
			if(arr[j] > arr[j + 1]){
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				swap = 1;
				isSorted = 0;
			}
		}
		if(swap == 0){
			break;
		}
//		if(isSorted = 1){
//			printf("Aleardy sorted!");
//		}
	}
}
void main () {
	int n = 5;
	int arr[n];
	
	createArray(arr, n);
	printf("\nArray before sort : ");
	printArray(arr, n);
	sortArray(arr, n);
	printf("\nArray after sort : ");
	printArray(arr, n);
}
