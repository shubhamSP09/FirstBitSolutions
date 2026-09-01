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

int searchValue(int *arr, int size){
	int num, i;
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
	return isExists;
}
void main() {
	int size = 5;
	int arr[size];
	
	createArray(arr, size);
	int res = searchValue(arr, size);
	
	if(res == -1){
		printf("\nNot Found");
	}else{
		printf("\nElement found at index %d", res);
	}
}
