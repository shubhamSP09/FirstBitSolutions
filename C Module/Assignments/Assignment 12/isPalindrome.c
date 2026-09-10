#include<stdio.h>

isPalindrome(char *str){
	int i = 0, len = 0;
	while(str[i] != '\0'){
		len++;
		i++;
	}
	i = 0;
	char tempstr[len];
	while(str[i] != '\0'){
		tempstr[i] = str[i];
		i++;
	}
	tempstr[i] = '\0';
	
	for(i = 0; i <= len / 2; i++) {
		char temp = tempstr[i];
		tempstr[i] = tempstr[len - 1 - i];
		tempstr[len - 1 - i] = temp;
	}
	printf("Reversed string = %s\n", tempstr);
	
	
	i = 0;
	
	while(str[i] != '\0' && tempstr[i] != '\0'){
		if(str[i] != tempstr[i]){
			return 0;
		}
		i++;
	}
	return 1;
}
void main () {
	char str[] = "shubhammahbuhs";
	printf("String = %s\n", str);
	if(isPalindrome(str)){
		printf("String is Palindrome");
	} else {
		printf("String is not Palindrome");
	}
}
