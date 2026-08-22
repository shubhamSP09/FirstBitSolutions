#include<stdio.h>

int main () {
	int num = 7, i;
	for(i = 2; i < num; i++){
		if(num % i == 0){
			printf("Not prime");
			break;
		}else{
			printf("Primr Number.");
			break;
		}
	}
}
