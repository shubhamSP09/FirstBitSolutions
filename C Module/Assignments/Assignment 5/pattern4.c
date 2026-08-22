#include<stdio.h>

int main() {
	int n = 5; 
	int i, j, l;
	
	for(i = 1; i <= n; i++) {
		for(l = n; l > i; l--) {
			printf(" ");
		}
		
		for(j = 1; j <= i; j++){
			printf("* ");
		}
		
		
		printf("\n");
	}
}
