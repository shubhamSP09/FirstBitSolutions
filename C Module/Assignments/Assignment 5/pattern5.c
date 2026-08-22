#include<stdio.h>

int main () {
	int n = 5;
	int i, j, l;
	for(i = 0; i < n; i++) {
		for(l = 0; l < i; l++) {
			printf(" ");
		}
		for(j = n; j > i; j--){
			printf("* ");
		}
		printf("\n");
	}
}
