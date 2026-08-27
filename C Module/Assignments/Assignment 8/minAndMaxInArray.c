#include<stdio.h>

void main() {
	int arr[5], i;
	for(i = 0; i < 5; i++){
		printf("Enter value at the index %d : ", i);
		scanf("%d", &arr[i]);
	}
	
	for(i = 0; i < 5; i++){
		printf("%d ", arr[i]);
	}
	
	int min = arr[0];
	for(i = 0; i < 5; i++){
		if(arr[i] < min){
			min = arr[i];
		}
	}
	
	int max = arr[0];
	for(i = 1; i < 5; i++){
		if(max < arr[i])
			max = arr[i];
	}
	
	printf("\nMinimum : %d", min);
	printf("\nMaximum : %d", max);
	
}
