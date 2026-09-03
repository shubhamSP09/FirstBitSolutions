#include<stdio.h>

void mystrncat(char *a, char *b, int n){
	int i = 0, j = 0;
	while(a[i] != '\0'){
		i++;
	}
	
	while(j < n){
		a[i] = b[j];
		j++;
		i++;
	}
	a[i] = '\0';
}
void main (){
	char a[20] = "Hello ";
	char b[] = "Shubham";
	printf("a: %s\n", a);
	mystrncat(a, b, 5);
	printf("a: %s", a);
}
