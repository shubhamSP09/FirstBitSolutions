#include<stdio.h>

void main() {
	int arr[5], i, sum = 0;
	
	for(i = 0; i < 5; i++){
		printf("Enter value at the index %d : ", i);
		scanf("%d", &arr[i]);	
	}
	
	for(i = 0; i < 5; i++){
		printf("%d ", arr[i]);
	} 
	
	for(i = 0; i < 5; i++){
		sum += arr[i];
	}
	
	printf("\n%d", sum);
}
