#include<stdio.h>

int main () {
	int n = 4; 
	int i, j;
	int o = 1;
	
	for(i = 1; i <= n; i++) {
		for(j = 1; j <= i; j++) {
			printf("%d	", o++);
		}
		printf("\n");
		printf("\n");
	}
}
