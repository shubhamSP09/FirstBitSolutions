#include <stdio.h>
void strongNum(){
	int num, numCopy, rem, factSum;
    int i, remFact;

    for (num = 1; num <= 100; num++) {

        numCopy = num;
        factSum = 0;

        while (numCopy > 0) {
            rem = numCopy % 10;

            remFact = 1;
            for (i = 1; i <= rem; i++) {
                remFact *= i;
            }

            factSum += remFact;
            numCopy /= 10;
        }

        if (factSum == num) {
            printf("%d is a Strong Number\n", num);
        }
    }
}
void main() {
    strongNum();
}
