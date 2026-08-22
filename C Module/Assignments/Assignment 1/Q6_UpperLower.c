#include<stdio.h>
int main () {
	char c = '9';
	if(c >= 'A' && c <= 'Z'){
		printf("Uppercase");
	} else if(c >= 'a' && c <= 'z'){
		printf("Lowercase");
	} else if(c >= '0' && c <= '9'){
		printf('digit');
	} else {
		printf("symbol");
	}
}
