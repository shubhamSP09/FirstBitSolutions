#include<stdio.h>

void main () {
	char str[20];
	printf("Enetr a string : ");
	scanf("%s", &str);
	
	char ch;
	printf("enter a character:");
	scanf("%s", &ch);
	
	
	int n = strlen(str);
	int i;
	for(i = 0; i < n; i++){
		if(str[i] == ch){
			break;
		}
	}
	
	printf("char found at %d", i);
}
