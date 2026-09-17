#include<stdio.h>

struct Book{
	char bname[50];
	int id;
	char author[50];
	float price;
};
void main() {
	struct Book b[3];
	printf("Enter details of 3 books : \n");
	int i;
	for(i = 0; i < 3; i++) {
		printf("Enter detail of book %d : \n", i + 1);
		
		printf("Enter book name: ");
		scanf("%s", &b[i].bname);
		
		printf("\nEnter book ID: ");
		scanf("%d", &b[i].id);
		
		printf("\nEnter auther name: ");
		scanf("%s", &b[i].author);
		
		printf("\nEnter price of the book: ");
		scanf("%2f", &b[i].price);
	}
	
	printf("\n========== BOOK DETAILS ==========\n");
	for(i = 0; i < 3; i++){
		printf("Book: %d\n", i + 1);
		printf("Book name: %s\n", b[i].bname);
		printf("Book Id: %d\n", b[i].id);
		printf("Author: %s\n", b[i].author);
		printf("Price: %d\n", b[i].price);
	}
}
