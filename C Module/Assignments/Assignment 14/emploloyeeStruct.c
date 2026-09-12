#include<stdio.h>
struct Employee {
	int id;
	char name[20];
	float salary;
};
void main () {
	struct Employee e1;
	printf("Enter a employee id: ");
	scanf("%d", &e1.id);
	printf("Enter your name: ");
	scanf("%s", &e1.name);
	printf("Enter your salaray: ");
	scanf("%f", &e1.salary);
	
	printf("Employee id : %d\n", e1.id);
	printf("Employe name: %s\n", e1.name);
	printf("Employee salary %.2f", e1.salary);
}
