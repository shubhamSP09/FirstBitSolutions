#include<stdio.h>

void main () {
	int arr[5];
	int num, i, isExist = 1;
	
	
	for(i = 0; i < 5; i++){
		printf("Enter a value at %d : ", i);
		scanf("%d", &arr[i]);
	}
	
	for(i = 0; i < 5; i++){
		printf("%d\n", arr[i]);
		if(num == arr[i]){
			isExist = 1;
			break;
		}
	}
	printf("Enter a number for serach : ");
	scanf("%d", &num);
	
	if(isExist){
		printf("Number is exist in array");
	}else{
		printf("Number dont exist in array");
	}
}
