#include<stdio.h>

int leapOrNot() {
	int year = 2004;
	
	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
		return 1;
	}else{
		return 0;
	}
}
int main () {
	if(leapOrNot()){
		printf("Leap year");
	} else {
		printf("Not a leap year");
	}
}
