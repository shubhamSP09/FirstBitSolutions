#include<stdio.h>

void main () {
	int n = 5;
	int arr[n];
	int i, j;
	for(i = 0; i < n; i++){
		printf("Enter a value in array at index %d :", i);
		scanf(" %d", &arr[i]);
	}
	
	printf("\nArray before sort: ");
	for(i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
	
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
	
	printf("\nArray after sort: ");
	for(i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
}
