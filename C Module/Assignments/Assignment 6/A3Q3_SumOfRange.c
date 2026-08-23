#include<stdio.h>
int sumOfRange(int start, int end){
	int sum = 0, i;
	for(i = start; i <= end; i++) {
	 		sum += i;
	}
	return sum;
}
int main () {
	int s = 1, e = 5;
	printf("%d", sumOfRange(s, e));
}
