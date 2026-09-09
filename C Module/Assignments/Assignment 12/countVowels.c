#include<stdio.h>

int countVowels(char *str){
	char vowels[] = "aeiouAEIOU";
	int i, j, count = 0;
	
	for(i = 0; str[i] != '\0'; i++){
		for(j = 0; vowels[j] != '\0'; j++) {
			if(str[i] == vowels[j]){
				count++;
				break;
			}
		}
	}
	return count;
}

void main() {
	char str[] = "shuaaaubham";
	printf("%d", countVowels(str));
}
