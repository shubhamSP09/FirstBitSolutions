#include<stdio.h>

int main () {
	float basic = 10000, salary;
	
	if(basic <= 5000) {
		salary = basic + (basic * .1) + (basic * .2) + (basic * .25);
	}else {
		salary = basic + (basic * .15) + (basic * .25) + (basic * .3);
	}
	printf("Total salary = %.2f", salary);
}
