#include<stdio.h>

void palindrom() {
	int num = 222;
	
	int fd, ld;
	
	fd = num / 100;
	ld = num % 10;
	
	if(fd == ld){
		printf("%d is a palindrome number.", num);
	}else {
		printf("%d is not a palindrome number.", num);
	}
}

void main() {
	palindrom();
}
