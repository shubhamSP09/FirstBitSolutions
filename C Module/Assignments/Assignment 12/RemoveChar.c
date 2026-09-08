#include<stdio.h>

removeChar(char *str, char ch){
	int i = 0 , j = 0;
	
	while(str[i] != '\0'){
		if(str[i] != ch){
			str[j++] = str[i];
			
		}
		i++;
	}
	str[j] = '\0';
}
void main (){
	char str[] = "shubxhamx";
	char ch = 'x';
	
	removeChar(str, ch);
	printf("%s", str);
}
