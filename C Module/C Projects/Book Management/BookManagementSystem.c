#include<stdio.h>
#include<stdlib.h>
#include <string.h>

struct Book {
	int bookId;
	char title[50];
	char author[50];
	float price;
	char category[50];
	float rating;
};

struct Book *addBook(struct Book *books, int *count, int *id){
	
	books = realloc(books, (*count + 1) * sizeof(struct Book));
	if (books == NULL) {
        printf("\nMemory allocation failed!");
        return books;
    }
	
	books[*count].bookId = (*id)++;
	
	printf("\nEnter a title of the book : ");
	scanf("%s", books[*count].title);
	
	printf("\nEnter a author name : ");
	scanf("%s", books[*count].author);
	
	printf("\nEnter a price of the book : ");
	scanf("%f", &books[*count].price);
	
	printf("\nEnter a category of book : ");
	scanf("%s", books[*count].category);
	
	printf("\nWhat is the rating of the book: ");
	scanf("%f", &books[*count].rating);
	
	(*count)++;
	
	return books;
}

void displayAllBooks(struct Book *books, int count){
	int i;
	
	if(count == 0){
		printf("\nNo books available");
		return;
	}
	
	printf("\n========== BOOK LIST ==========");
	
	i = 0;
	
	while(i < count){
		printf("\nBook %d", i + 1);
		printf("\nBook ID		: %d", books[i].bookId);
		printf("\nTitle		: %s", books[i].title);
		printf("\nAuthor		: %s", books[i].author);
		printf("\nPrice		: %.2f", books[i].price);
		printf("\nCategory	: %s", books[i].category);
		printf("\nRating		: %.1f", books[i].rating);
		printf("\n");
		i++;
	}
}

void displayBook(struct Book *books, int i){
	printf("\nBook %d", i + 1);
	printf("\nBook ID		: %d", books[i].bookId);			
	printf("\nTitle		: %s", books[i].title);
	printf("\nAuthor		: %s", books[i].author);
	printf("\nPrice		: %.2f", books[i].price);
	printf("\nCategory	: %s", books[i].category);
	printf("\nRating		: %.1f", books[i].rating);
}

void searchBook(struct Book *books, int count){
	int choice = 0;
	
	
	while(choice != 5){
		printf("\n========== Search Book ==========\n");
		printf("1. Search by ID\n");
		printf("2. Search by book title\n");
		printf("3. Search by Author\n");
		printf("4. Search by catagory\n");
		printf("5. Back to Main Menu\n");
		printf("=================================\n\n");
		
		printf("Enter a choice: ");
		scanf("%d", &choice);
		int found = 0;
		if(choice == 1){
			int id;
			printf("\nEnter book id: ");
			scanf("%d", &id);
			int i = 0;
			while(i < count){
				if(id == books[i].bookId){
					displayBook(books, i);
					found = 1;
					break;
				}
				
				i++;
			}
			if(found == 0){
				printf("Book Not Found!");
			}
		} else if(choice == 2){
			char title[50];
			printf("Enter a book name: ");
			scanf("%s", title);
			int i = 0;
			while(i < count){
				int result = strcmp(title, books[i].title);
				if(result == 0){
					displayBook(books, i);
					found = 1;
				}
				
				i++;
			}
			if(found == 0){
					printf("Book Not Found!");
			}
		} else if(choice == 3){
			char author[50];
			printf("Enter a author name: ");
			scanf("%s", author);
			int i = 0;
			while(i < count){
				int result = strcmp(author, books[i].author);
				if(result == 0){
					displayBook(books, i);
					found = 1;
				}
	
				i++;
			}
			if(found == 0){
				printf("Book Not Found!");
			}
		} else if(choice == 4){
			char category[50];
			printf("Enter a Category : ");
			scanf("%s", category);
			int i = 0;
			while(i < count){
				int result = strcmp(category, books[i].category);
				if(result == 0){
					displayBook(books, i);
					found = 1;
				}
				
				i++;
			}
			if(found == 0){
				printf("Book Not Found!");
			}
		} else if(choice == 5){
			return;
		} else {
			printf("Please enter a valid choice!");
		}
	}
}


void updateBook(struct Book *books, int count){
	
	int id;
	
	
	if(count == 0){
		printf("\nNo Book available to update");
		return;
	}
	printf("\nEnter a id to update: ");
	scanf("%d", &id);
	int i = 0;
	int found = 0;
	while(i < count){
		if(id == books[i].bookId){
			found = 1;
			break;
		}
		i++;
	}
	
	if(found == 0){
		printf("\nBook not found!");
		return;
	}
	
	int choice = 0;
	
	while(choice != 6){
		printf("\n========== Update Book ==========\n");
		printf("1. Update Title\n");
		printf("2. Update Author\n");
		printf("3. Update Price\n");
		printf("4. Update Category\n");
		printf("5. Update Rating\n");
		printf("6. Done\n");
		printf("=================================\n\n");
		
		printf("\nCurrent book -------------------");
		displayBook(books, i);
		printf("----------------------------------\n");
		
		printf("\n\nEnter your choice: ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("\nEnter new title: ");
            scanf("%s", books[i].title);

            printf("Title updated successfully!");
        }
        else if (choice == 2)
        {
            printf("\nEnter new author: ");
            scanf("%s", books[i].author);

            printf("Author updated successfully!");
        }
        else if (choice == 3)
        {
            printf("\nEnter new price: ");
            scanf("%f", &books[i].price);

            printf("Price updated successfully!");
        }
        else if (choice == 4)
        {
            printf("\nEnter new category: ");
            scanf("%s", books[i].category);

            printf("Category updated successfully!");
        }
        else if (choice == 5)
        {
            printf("\nEnter new rating: ");
            scanf("%f", &books[i].rating);

            printf("Rating updated successfully!");
        }
        else if (choice == 6)
        {
            printf("\nBook update completed!");
            return;
        }
        else
        {
            printf("\nInvalid choice!");
    	}
	}
}

struct Book *deleteBook(struct Book *books, int *count){
	if(*count == 0){
		printf("\nNo Books Avalibale to delete");
		return books;
	}
	int id;
	printf("\nEnter a Book Id to delete the book: ");
	scanf("%d", &id);
	int i = 0;
	int found = 0;
	while(i < *count){
		if(id == books[i].bookId){
			found = 1;
			break;
		}
		i++;
	}
	
	if(found == 0){
		printf("\nBook Not Found!");
		return books;
	}
	
	while(i < *count - 1){
		books[i] = books[i + 1];
		i++;
	}
	(*count)--;
	struct Book *temp;
	
	temp = realloc(books, (*count) * sizeof(struct Book));
	
	books = temp;
	printf("\nBook deleted successfully");
	return books;
}

void sortBooks(struct Book *books, int count){
    int i, j;
    struct Book temp;
    struct Book *tempBook;

    if(count == 0){
        printf("\nNo Books Available to Sort!");
        return;
    }

    tempBook = malloc(count * sizeof(struct Book));

    if(tempBook == NULL){
        printf("\nMemory allocation failed!");
        return;
    }

    i = 0;
    while(i < count){
        tempBook[i] = books[i];
        i++;
    }

    int choice = 0;

    while(choice != 4){
        printf("\n============ Sort Book ============\n");
        printf("1. Sort by ID\n");
        printf("2. Sort By Price\n");
        printf("3. Sort By Rating\n");
        printf("4. Back to Main Menu\n");
        printf("===================================\n\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        if(choice == 4){
            free(tempBook);
            return;
        }
        else if(choice < 1 || choice > 3){
            printf("\nInvalid choice!");
        }
        else{
            int order;

            printf("\n============= Order =============\n");
            printf("1. Ascending Order\n");
            printf("2. Descending Order\n");
            printf("=================================\n\n");

            printf("Enter your choice: ");
            scanf("%d", &order);

            if(order < 1 || order > 2){
                printf("\nInvalid order!");
            }

            else if(choice == 1){
                if(order == 1){
                    for(i = 0; i < count - 1; i++){
                        for(j = 0; j < count - i - 1; j++){
                            if(tempBook[j].bookId > tempBook[j + 1].bookId){
                                temp = tempBook[j];
                                tempBook[j] = tempBook[j + 1];
                                tempBook[j + 1] = temp;
                            }
                        }
                    }
                }
                else if(order == 2){
                    for(i = 0; i < count - 1; i++){
                        for(j = 0; j < count - i - 1; j++){
                            if(tempBook[j].bookId < tempBook[j + 1].bookId){
                                temp = tempBook[j];
                                tempBook[j] = tempBook[j + 1];
                                tempBook[j + 1] = temp;
                            }
                        }
                    }
                }

                displayAllBooks(tempBook, count);
            }

            else if(choice == 2){
                if(order == 1){
                    for(i = 0; i < count - 1; i++){
                        for(j = 0; j < count - i - 1; j++){
                            if(tempBook[j].price > tempBook[j + 1].price){
                                temp = tempBook[j];
                                tempBook[j] = tempBook[j + 1];
                                tempBook[j + 1] = temp;
                            }
                        }
                    }
                }
                else if(order == 2){
                    for(i = 0; i < count - 1; i++){
                        for(j = 0; j < count - i - 1; j++){
                            if(tempBook[j].price < tempBook[j + 1].price){
                                temp = tempBook[j];
                                tempBook[j] = tempBook[j + 1];
                                tempBook[j + 1] = temp;
                            }
                        }
                    }
                }

                displayAllBooks(tempBook, count);
            }

            else if(choice == 3){
                if(order == 1){
                    for(i = 0; i < count - 1; i++){
                        for(j = 0; j < count - i - 1; j++){
                            if(tempBook[j].rating > tempBook[j + 1].rating){
                                temp = tempBook[j];
                                tempBook[j] = tempBook[j + 1];
                                tempBook[j + 1] = temp;
                            }
                        }
                    }
                }
                else if(order == 2){
                    for(i = 0; i < count - 1; i++){
                        for(j = 0; j < count - i - 1; j++){
                            if(tempBook[j].rating < tempBook[j + 1].rating){
                                temp = tempBook[j];
                                tempBook[j] = tempBook[j + 1];
                                tempBook[j + 1] = temp;
                            }
                        }
                    }
                }

                displayAllBooks(tempBook, count);
            }
        }
    }

    free(tempBook);
}
void main(){
	struct Book *books = NULL;
	int count = 0;
	int choice = 0;
	int id = 1;
	
	
	while(choice != 8){
		printf("\n========== Book Management System ===========\n");
		printf("1. Add Book\n");
		printf("2. Display All Books\n");
		printf("3. Search Book\n");
		printf("4. Update Book\n");
		printf("5. Delete Book\n");
		printf("6. Sort Book\n");
		printf("7. Total Book\n");
		printf("8. Exit\n ");
		printf("=============================================\n\n");
		printf("Enter your choice : ");
		scanf("%d", &choice);
		
		if(choice == 1){
			books = addBook(books, &count, &id);
		}else if(choice == 2){
			displayAllBooks(books, count);
		} else if(choice == 3) {
			searchBook(books, count);
		} else if(choice == 4){
			updateBook(books, count);
		} else if(choice == 5){
    		books = deleteBook(books, &count);
		} else if(choice == 6){
			sortBooks(books, count);
		} else if(choice == 7){
			printf("\nTotal Books =  %d", count);
		} else if(choice == 8){
			return;
		} else{
			printf("\nInvalide choice");
		}
	}
	free(books);
}
