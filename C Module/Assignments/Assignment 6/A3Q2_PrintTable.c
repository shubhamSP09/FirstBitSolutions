#include<stdio.h>
void printTable(int num){
	int i;
	for(i = 1; i <= 10; i++) {
		printf("%d x %d = %d\n", num, i, num * i);
	}
}
int main () {
	int num = 5;
	printTable(num);
}
