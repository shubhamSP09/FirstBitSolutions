#include<stdio.h>
int isPersonVote(int age){
	if(age >= 19){
		return 1;
	}else {
		return 0;
	}
}
int main () {
	int age = 21;
	if(isPersonVote(age)){
		printf("Person can vote");
	}else {
		printf("Person can't vote.");
	}
}
