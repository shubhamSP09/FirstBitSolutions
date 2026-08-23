#include<stdio.h>
int isPrime(int num){
	int i;
	for(i = 2; i < num; i++){
		if(num % i == 0){
			return 0;
			break;
		}else{
			return 1;;
			break;
		}
	}
}
int main () {
	int num = 4;
	if(isPrime(num)){
		printf("Primr Number.");
	}else{
		printf("Not prime");
	}
	
}
