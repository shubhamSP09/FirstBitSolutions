#include <stdio.h>
#include <string.h>

void main()
{
    char a[50] = "Shubham";
    char b[20];
    char c[10];

    printf("\nString a : %s", a);

    printf("\nString length : %zu", strlen(a));

    strcpy(b, a);
    printf("\nString a copy in b string: %s", b);

    strncpy(c, a, 3);
    c[3] = '\0';
    printf("\nFirst 3 char of string a copy in string c: %s", c);

    strcat(a, b);
    printf("\nConcatenate string a and b: %s", a);

    strncat(b, c, 3);
    printf("\nConcatenate complete string b and first 3 letters of c: %s", b);

    printf("\nCompare string: ");

    if (strcmp(a, b) == 0) {
        printf("same");
    } else if (strcmp(a, b) > 0) {
        printf("String a is greater");
    } else {
        printf("String b is greater");
    }

    printf("\nCompare first 3 letters of string: ");

    if (strncmp(a, b, 3) == 0) {
        printf("same");
    } else if (strncmp(a, b, 3) > 0) {
        printf("String a is greater");
    } else {
        printf("String b is greater");
    }

    char *firstOccurrence = strchr(a, 'h');

    if (firstOccurrence != NULL) {
        printf("\nLetter search first occurrence: %s", firstOccurrence);
    } else {
        printf("\nLetter not found");
    }

   
    char *lastOccurrence = strrchr(b, 'h');

    if (lastOccurrence != NULL) {
        printf("\nLetter search last occurrence: %s", lastOccurrence);
    } else {
        printf("\nLetter not found");
    }

    char *substring = strstr(a, "ham");

    if (substring != NULL) {
        printf("\nSubstring ham found: %s", substring);
    } else {
        printf("\nSubstring ham not found");
    }

    char *result = strchr(a, 'm');
    if(result != NULL){
    	printf("\nstrchr : %s", result);
	}
	
	char d[] = "012345shubham";
	printf("\ncount the char: %d", strspn(d, "1234567890"));
	
	char e[] = "shubham1234";
	printf("\nCount char  until a set appears : %d", strcspn(e, "12345"));
	
	char str[] = "apple,banana,mango";

    char *token = strtok(str, ",");

    while (token != NULL) {
        printf("\n%s", token);
        token = strtok(NULL, ",");
    }
}

