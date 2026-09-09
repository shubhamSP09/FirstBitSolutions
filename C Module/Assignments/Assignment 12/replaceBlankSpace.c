#include<stdio.h>


void replaceBlankSpace(char *str, char s){
	int i = 0;
	while(str[i] != '\0'){
		if(str[i] == ' '){
			str[i] = s;
		}
		i++;
	}
}
void main() {
	char str[] = "shubham hari patil";
	replaceBlankSpace(str, '_');
	printf("%s", str);
}
