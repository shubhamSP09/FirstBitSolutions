#include<stdio.h>

void createArray(int *arr, int size) {
    int i;

    for(i = 0; i < size; i++) {
        printf("Enter value at the index %d : ", i);
        scanf("%d", &arr[i]);
    }
}

void displayArray(int *arr, int size) {
    int i;

    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

void reverseArray(int *arr, int size){
	int i;
	for(i = 0; i < size / 2; i++){
		int temp = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = temp;
	}
}

void main (){
	int size = 5;
	int arr[size];
	
	createArray(arr, size);
	printf("\nArray before: ");
	displayArray(arr, size);
	
	reverseArray(arr, size);
	
	printf("\nReversed Array: ");
	displayArray(arr, size);
	
	printf("\n");
}
