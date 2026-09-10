#include<stdio.h>

void removeOddIdx(char *str){
	int i = 0;
	int j = 0;
	while(str[i] != '\0'){
		if(i % 2 == 0){
			str[j] = str[i];
			j++;
		} 
		i++;
	}
	str[j] = '\0';
}
void main() {
	char str[] = "sahauabahaaam";
	
	removeOddIdx(str);
	printf("%s", str);
}
