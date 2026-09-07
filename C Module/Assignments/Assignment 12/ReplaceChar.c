#include<stdio.h>


void replaceChar(char *str, char ch1, char ch2){
	int j = 0;
	while(str[j] != '\0'){
		j++;
	}
	int i;
	for(i = 0; i < j; i++){
		if(str[i] == ch1){
			str[i] = ch2;
		}
	}
}
void main() {
	char str[20] = "Shubham";
	char ch1 = 'a';
	char ch2 = '@';
	printf("Before : %s", str);
	replaceChar(str, ch1, ch2);
	printf("\nAfter : %s", str);
}
