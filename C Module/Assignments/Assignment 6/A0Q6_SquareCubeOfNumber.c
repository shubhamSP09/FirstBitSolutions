#include<stdio.h>

int squareAndCubeOfNumber(int n){
	printf("The squar of %d is %d.", n, n * n);
	printf("\nThe cube of %d is %d.", n, n * n * n);
}
int main () {
	int a = 3;
	squareAndCubeOfNumber(a);
}
