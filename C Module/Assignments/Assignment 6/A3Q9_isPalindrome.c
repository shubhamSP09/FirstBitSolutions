#include <stdio.h>
int isPalindrome(int num){
	int reverse = 0;
    int rem;
	
    while (num > 0) {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num /= 10;
    }
	return reverse;
    
}
int main() {
    int num = 121;
    isPalindrome(num);
    if (isPalindrome(num) == num) {
        printf("Palindrome Number");
    } else {
        printf("Not Palindrome Number");
    }
    

}
