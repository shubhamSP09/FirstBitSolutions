#include<stdio.h>

int mystrlen(char *str){
	int i = 0;
	while(str[i] != '\0'){
		
		i++;
	}
	return i;
}
void main() {
	char a[] = "shubham";
	int len = mystrlen(a);
	printf("%d", len);
}
