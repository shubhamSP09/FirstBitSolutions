#include<stdio.h>
void sumOfElements(int *arr, int size, int *sum){
	int i;
	for(i = 0; i < size; i++) {
		*sum += *arr[i];
	}
}
void main() {
	int size = 5, int sum = 0;
	int arr[size];
	sumOfElements(int arr, int size, int &sum);
}
