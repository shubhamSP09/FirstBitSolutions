#include<stdio.h>

struct musicLibrary {
	int id;
	char title[50];
	char artist[50];
	float duration;
};

struct musicLibrary addSong(struct musicLibrary *songs, int n, int *ci){
	
		printf("Song %d---------------------------------------------\n", *ci + 1);
		songs[*ci].id = ci+1;
		printf("Title: ");
		scanf("%s", songs[*ci].title);
		printf("Artist: ");
		scanf("%s", songs[*ci].artist);
		printf("duration: ");
		scanf("%f", &songs[*ci].duration);
		(*ci)++;
}

struct musicLibrary displaySong(struct musicLibrary *songs, int n){
	int i;
	for(i = 0; i < n; i++){
		printf("\nsong %d ------------------------------------\n", i + 1);
		printf("ID: %d\n", songs[i].id);
		printf("Title: %s\n", songs[i].title);
		printf("Artist: %s\n", songs[i].artist);
		printf("Duration: %.2f\n", songs[i].duration);
		printf("--------------------------------------------\n");
	}
}
void main(){
	int n = 5;
	int ci = 0;
	struct musicLibrary songs[n];
	
	int choice = 0;
	
	while(choice != 3){
		printf("\n========== Menu Driven ==========\n");
		printf("1. Add Song\n");
		printf("2. Display Songs\n");
		printf("3. Done\n");
		printf("=================================\n\n");
		
		printf("\nEnter your choice: ");
		scanf("%d", &choice);
		
		if(choice == 1){
			addSong(songs, n, &ci);
		} else if(choice == 2){
			displaySong(songs, ci);
		} else if(choice == 3){
			return;
		} else{
			printf("Invalid choice!");
		}
		
	}
}
