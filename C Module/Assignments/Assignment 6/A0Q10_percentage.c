#include<stdio.h>
void percentage(){
	int m1 = 80;
	int m2 = 80;
	int m3 = 80;
	int m4 = 80;
	int m5 = 80;
	
	int total = m1 + m2 + m3 + m4 + m5;
	float percentage = total / 500.0 * 100;
	
	printf("Total = %d", total);
	printf("\nPercentage = %.2f", percentage);
}
int main () {
	percentage();
}
