#include<stdio.h>
int minToHours(int min){
	printf("Convert %d minutes into hours.", min);
	int hours = min / 60;
	int hMin = min % 60;
	printf("\nAfter conversion......");
	printf("\n%d hours %d minutes", hours, hMin);
}
int main () {
	
	int min = 170;
	minToHours(min);
	
}
