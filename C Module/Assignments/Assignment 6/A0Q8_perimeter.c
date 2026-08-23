#include<stdio.h>
int perimeter(int l, int w){
	int P = 2 * (l + w);
	return P;
}
int main () {
	int l = 120;
	int w = 90;
	int P = perimeter(l, w);
	printf("%d", P);
}
