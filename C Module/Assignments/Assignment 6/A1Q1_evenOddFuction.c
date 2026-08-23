#include<stdio.h>
evenOdd() {
	int num = 10;
	if (num > 0) {
		printf("%d is a even number.", num);
	}else{
		printf("%d is a odd number.", num);
	}	
}

int main() {
	printf(evenOdd());
}

