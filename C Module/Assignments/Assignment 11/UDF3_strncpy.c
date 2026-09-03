#include<stdio.h>


mystrncpy(char *s1, char *s2, int n){
	int i = 0;
	while(i < n){
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
}
void main() {
	char a[] = "shubham";
	char b[20];
	
	mystrncpy(b, a, 5);
	printf("a: %s\n",a);
	printf("b: %s", b);
}
