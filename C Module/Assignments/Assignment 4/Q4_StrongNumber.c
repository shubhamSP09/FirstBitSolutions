#include <stdio.h>

void main() {
    int num, i;
    int range = 1000;

    for(i = 1; i <= range; i++) {
        
        num = i;
        int factSum = 0;

        while(num > 0) {
            
            int rem = num % 10;
            int fact = 1;
            int j;

            for(j = 1; j <= rem; j++) {
                fact = fact * j;
            }

            factSum = factSum + fact;

            num = num / 10;
        }

        if(factSum == i) {
            printf("%d is a Strong Number\n", i);
        }
    }
}

