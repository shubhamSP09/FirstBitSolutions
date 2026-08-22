#include<stdio.h>
int main () {
	int min = 170;
	printf("Convert %d minutes into hours.", min);
	int hours = min / 60;
	int hMin = min % 60;
	printf("\nAfter conversion......");
	printf("\n%d hours %d minutes", hours, hMin);
}
