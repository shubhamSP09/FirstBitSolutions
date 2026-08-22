#include<stdio.h>

int main () {
	int n = 5;
	int i, j;
	for(i = 1; j <= n; i++) {
		for(j = 1; j <= i; j++) {
			printf("%d ", j);
		}
		printf("\n");
	}
}
