#include<stdio.h>
int findGreatestNumber(){
	int a = 20;
	int b = 10;
	int c = 30;
	
	if(a > b && a > c) {
		return 1;
	}else if (b > a && b > c) {
		return 2;
	}else {
		return 3;
	}
}
int main () {
	int a = 20;
	int b = 10;
	int c = 30;
	
	if(findGreatestNumber(a, b, c) == 1) {
		printf("a is greatest number");
	}else if (findGreatestNumber(a, b, c ) == 2) {
		printf("b is greatest number");
	}else {
		printf("c is greatest number");
	}
}
