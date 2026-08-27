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
	printf("\nAlternate element : ");
	for(i = 0; i < 5; i += 2){
		printf("%d ", arr[i]);
//		i++;
	}
}
