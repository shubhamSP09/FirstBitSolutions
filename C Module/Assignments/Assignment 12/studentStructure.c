#include<stdio.h>
struct student {
	int rollNo;
	char name[20];
	int marks;
};
void main() {
	struct student s;
	
	printf("Enter a roll no of student: ");
	scanf("%d", &s.rollNo);
	printf("\nEnter a name of student : ");
	scanf("%s", &s.name);
	printf("\nEnter a marks of the student: ");
	scanf("%d", &s.marks);
	
	printf("%d, %s, %d", s.rollNo, s.name, s.marks)
;}
