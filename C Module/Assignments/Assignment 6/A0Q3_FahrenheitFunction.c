#include<stdio.h>

void findFahrenheit(int c){
	float celsius = c;
	float fahrenheit = (celsius * 9 / 5) + 32;
	printf("Temprature in fahrenheit is %.2f", fahrenheit);
}
int main () {
	 findFahrenheit(25);	
}
