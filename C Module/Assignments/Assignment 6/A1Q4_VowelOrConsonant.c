#include<stdio.h>

void vowelOrConsonant(char ch){
	
if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
		printf("Vowel");
	}else {
		printf("Consonant");
	}
}
int main () {
	char ch = 'A';
	vowelOrConsonant(ch);
}
