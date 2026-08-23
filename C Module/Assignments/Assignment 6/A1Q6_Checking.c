#include<stdio.h>
int checking(char c) {
	if(c >= 'A' && c <= 'Z'){
		printf("Uppercase");
	} else if(c >= 'a' && c <= 'z'){
		printf("Lowercase");
	} else if(c >= '0' && c <= '9'){
		printf("digit");
	} else {
		printf("symbol");
	}
}
int main () {
	char c = 'a';
	checking(c);
}
