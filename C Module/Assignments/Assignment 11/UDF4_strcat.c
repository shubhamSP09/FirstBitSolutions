#include<stdio.h>

void mystrcat(char *a, char *b){
	int i = 0, j = 0;
	
	while(a[i] != '\0'){
		i++;
	}
	
	while(b[j] != '\0'){
		a[i] = b[j];
		j++;
		i++;
	}
	a[i] = '\0';
}
void main (){
	char a[20] = "Shubham ";
	char b[] = "Patil";
	
	printf("a : %s\n", a);
	mystrcat(a, b);
	printf("a : %s", a);
}
