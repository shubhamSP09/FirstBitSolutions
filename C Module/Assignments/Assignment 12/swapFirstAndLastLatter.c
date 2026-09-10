#include<stdio.h>

void swapFirstAndLastLatter(char *str){
	int len = 0;
	while(str[len] != '\0'){
		len++;
	}
	int start = 0;
	int end = len - 1;
	
	char temp = str[start];
	str[start] = str[end];
	str[end] = temp;
	
}
void main () {
	char str[] = "mhubhas";
	swapFirstAndLastLatter(str);
	printf("%s", str);
}
