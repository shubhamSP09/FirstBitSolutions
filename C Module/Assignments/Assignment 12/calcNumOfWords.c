#include<stdio.h>

int calcNumOfWords(char *str) {
	int i = 0;
	int count = 0;
	while(str[i] != '\0'){
		if(str[i] == ' '){
			count++;
		}
		i++;
	}
	return count;
}
void main() {
	char str[] = "Shubham Hari Patil";
	
	int n = calcNumOfWords(str);
	
	printf("%d", n);
}
