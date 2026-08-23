#include<stdio.h>
int calcTotalSalary(int basic){
	int salary;
	if(basic <= 5000) {
		salary = basic + (basic * .1) + (basic * .2) + (basic * .25);
	}else {
		salary = basic + (basic * .15) + (basic * .25) + (basic * .3);
	}
	return salary;
}
int main () {
	float basic = 10000;
	printf("%d", calcTotalSalary(basic));
}
