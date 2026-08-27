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
	
	int num;
	printf("\nEnter a value for search : ");
	scanf("%d", &num);
	
	int isExists;
	for(i = 0; i < 5; i++){
		if(num == arr[i]){
			isExists = i;
			break;
		}else {
			isExists = -1;
		}
	}
	
	if(isExists == -1){
		printf("\nNot Found");
	}else{
		printf("\nElement found at index %d", isExists);
	}
}
