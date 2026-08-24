#include<stdio.h>
int perfectNum(int range){
	int i;
	
	for(i = 1; i <= range; i++) {
		int j;
		int sum = 0;
		for(j = 1; j < i; j++){
			if(i % j == 0){
				sum += j;	
			}
		}
		if(sum == i){
			printf("%d\n", i);
		}
	}
}
int main () {
	int range = 1000000;
	perfectNum(range);
}
