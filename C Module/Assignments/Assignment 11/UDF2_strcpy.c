#include<stdio.h>

mystrcpy(char *s1, char *s2){
	int i = 0;
	while(s2[i] != '\0'){
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
}
void main() {
	char a[] = "shubham";
	char b[10];
	
	mystrcpy(b, a);
	printf("%s\n", a);
	printf("%s", b);
}
