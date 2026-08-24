#include <stdio.h>

void squarePattern(int n) {
    int i, j;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void increasingTriangle(int n) {
    int i, j;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void decreasingTriangle(int n) {
    int i, j;

    for (i = n; i >= 1; i--) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void rightAlignedTriangle(int n) {
    int i, j, l;

    for (i = 1; i <= n; i++) {

        for (l = n; l > i; l--) {
            printf(" ");
        }

        for (j = 1; j <= i; j++) {
            printf("* ");
        }

        printf("\n");
    }
}

void reverseRightAlignedTriangle(int n) {
    int i, j, l;

    for (i = 0; i < n; i++) {

        for (l = 0; l < i; l++) {
            printf(" ");
        }

        for (j = n; j > i; j--) {
            printf("* ");
        }

        printf("\n");
    }
}

void numberTriangle(int n) {
    int i, j;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}

void numberPyramid(int n) {
    int i, j;
    int o = 1;

    for (i = 1; i <= n; i++) {

        for (j = 1; j <= i; j++) {
            printf("%d\t", o++);
        }

        printf("\n");
        printf("\n");
    }
}

void diamondPattern(int n) {
    int i, j;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    for (i = n; i >= 1; i--) {
        for (j = 1; j < i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void hollowSquare(int n) {
    int i, j;

    for (i = 1; i <= n; i++) {

        for (j = 1; j <= n; j++) {

            if (i == 1 || i == n || j == 1 || j == n) {
                printf("* ");
            } else {
                printf("  ");
            }
        }

        printf("\n");
    }
}

void diagonalSquare(int n) {
    int i, j;

    for (i = 1; i <= n; i++) {

        for (j = 1; j <= n; j++) {

            if (i == 1 || i == n || j == 1 || j == n || i == j) {
                printf("* ");
            } else {
                printf("  ");
            }
        }

        printf("\n");
    }
}

void main() {

    int n;
    int choice;

    printf("Enter the number of rows/size: ");
    scanf("%d", &n);

    printf("\n");
    printf("========== PATTERN MENU ==========\n");
    printf("1.  Square Pattern\n");
    printf("2.  Increasing Triangle\n");
    printf("3.  Decreasing Triangle\n");
    printf("4.  Right Aligned Triangle\n");
    printf("5.  Reverse Right Aligned Triangle\n");
    printf("6.  Number Triangle\n");
    printf("7.  Continuous Number Triangle\n");
    printf("8.  Diamond Pattern\n");
    printf("9.  Hollow Square\n");
    printf("10. Square with Diagonal\n");
    printf("11. Exit\n");

    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        squarePattern(n);
    }
    else if (choice == 2) {
        increasingTriangle(n);
    }
    else if (choice == 3) {
        decreasingTriangle(n);
    }
    else if (choice == 4) {
        rightAlignedTriangle(n);
    }
    else if (choice == 5) {
        reverseRightAlignedTriangle(n);
    }
    else if (choice == 6) {
        numberTriangle(n);
    }
    else if (choice == 7) {
        numberPyramid(n);
    }
    else if (choice == 8) {
        diamondPattern(n);
    }
    else if (choice == 9) {
        hollowSquare(n);
    }
    else if (choice == 10) {
        diagonalSquare(n);
    }
    else if (choice == 11) {
        printf("Program exited.");
    }
    else {
        printf("Invalid choice. Please choose between 1 to 11.");
    }
}


