#include<stdio.h>

void main () {
	int num;
	int selection;
	while(selection != 7){
	
	printf("\nEnter your number to check : ");
	scanf("%d", &num);
	printf("Press----\n");
	printf("1. To check number is even odd\n");
	printf("2. to check number is prime or not\n");
	printf("3. to check number is pallindrom or not\n");
	printf("4. To check number is positive, negative or zero\n");
	printf("5. To reverse a number\n");
	printf("6. To find the sum of a digits\n");
	printf("7 for exit");
	
	printf("\nenter your task selaction choose : ");
	scanf("%d", &selection);
	
	
	if(selection == 1){
		num % 2 == 0 ? printf("Even Number.") : printf("Odd number.");
	} else if(selection == 2){
		int i;
		int isPrime = 1;
		for(i = 2; i < num; i++){
			if(num % i == 0){
				isPrime = 0;
				break;
			}
		}
		
		if(isPrime) {
			printf("Prime number.");
		}else{
			printf("Not a prime number.");
		}
	} else if (selection == 3) {
		int temp = num;
		int rem, rev;
		
		while(temp > 0){
			rem = temp % 10;
			rev = rev * 10 + rem;
			temp /= 10;
		}
		if(num == rev){
			printf("Palindrome number");
		} else {
			printf("Not a Palindrome number");
		}
	} else if(selection == 4) {
		if(num > 0) {
			printf("%d is even number.", num);
		}else if(num < 0) {
			printf("%d is odd number.", num);
		}else{
			printf("number is %d", num);
		}
	} else if(selection == 5) {
		int temp = num, rev = 0, rem;
		
		while (temp > 0) {
			rem = temp % 10;
			rev = rev * 10 + rem;
			temp /= 10;
		}
		
		printf("Orignal number = %d\n", num);
		printf("Reversed number = %d", rev);
	} else if(selection == 6) {
		int temp = num, sum = 0, rem;
		
		while (temp > 0) {
			rem = temp % 10;
			sum += rem;
			temp /= 10;
		}
		printf("the sum of all digits of %d is %d", num, sum);
	} else if(selection == 7){
		printf("exit");
	}else {
		printf("enter your selection choose between 1 to 6");
	}
}
}

