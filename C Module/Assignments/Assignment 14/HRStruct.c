#include<stdio.h>
struct HR {
	int id;
	char name[20];
	float salaray;
	float commition;
};
void main (){
	struct HR h;
	scanf("%s", &h.name);
	h.id = 101;
	h.salaray = 25000;
	h.commition = 5000;
	
	printf("%d %s %2f %2f", h.id, h.name, h.salaray, h.commition);
}
