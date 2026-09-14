#include<stdio.h>
struct HR {
	int id;
	char name[20];
	float salaray;
	float commition;
	int experience;
};
void main (){
	struct HR h;
	scanf("%s", &h.name);
	h.id = 101;
	h.salaray = 25000;
	h.commition = 5000;
	h.experience = 3;
	
	printf("%d %s %2f %2f %d", h.id, h.name, h.salaray, h.commition, h.experience);
}
