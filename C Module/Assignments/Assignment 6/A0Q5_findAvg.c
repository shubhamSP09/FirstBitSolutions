#include<stdio.h>
int findAvg(int a, int b, int c, int d, int e){
	int n1 = a;
	int n2 = b;
	int n3 = c;
	int n4 = d;
	int n5 = e;
	int sum = n1 + n2 + n3 + n4 + n5;
	int avg = sum / 5;
	printf("then avarage of given five numbers is %d.", avg);
}
int main () {
	findAvg(80, 84, 60, 99, 80);
}
