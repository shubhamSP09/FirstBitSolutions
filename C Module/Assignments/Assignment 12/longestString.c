#include<stdio.h>

int longestString(char *str1, char *str2){
	int i = 0;
	while(str1[i] != 0 || str2[i] != 0){
		if(str1[i] > str2[i]){
			return 1;
		} else if(str2[i] > str1[i]){
			return 2;
		}
		i++;
	}
	return 0;
}
void main () {
	char str1[] = "Shubham";
	char str2[] = "Shubhan";
	printf("string 1 = %s\n", str1);
	printf("string 2 = %s\n", str2);
	int result = longestString(str1, str2);
	
	if(result == 1){
		printf("string %s is longest string", str1);
	}else if(result == 2){
		printf("string %s is longest string", str2);
	}else{
		printf("Both strings are same");
	}
}
