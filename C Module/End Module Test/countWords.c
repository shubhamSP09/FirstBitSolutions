#include<stdio.h>

void main(){
	char str[] = "Shubham Patil";
	int count = 1;
	int i = 0;
	while(str[i] != '\0'){
		if(str[i] == ' '){
			count++;
		}
		i++;
	}
	printf("Numbers of words : %d", count);
}
