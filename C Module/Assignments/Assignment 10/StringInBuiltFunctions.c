#include<stdio.h>
#include<string.h>

void main(){
	char a[] = "Shubham";
	char b[20];
	printf("\nString a : %s", a);
	printf("\nString length : %d", strlen(a));
	printf("\nString a copy in b string: %s", strcpy(b, a));
	char c[10];
	strncpy(c, a, 3);
	c[4] = '\0';
	printf("\nFirst 3 char of string a copy in sting c: %s", c);
}
