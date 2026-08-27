#include <stdio.h>

void createArray(int *arr, int size) {
    int i;

    for(i = 0; i < size; i++) {
        printf("Enter value at the index %d : ", i);
        scanf("%d", &arr[i]);
    }
}

void displayArray(int *arr, int size) {
    int i;

    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int main() {
    int arr1[5], arr2[5], arr3[10];
    int i;

    createArray(arr1, 5);
    createArray(arr2, 5);
    
    printf("\nFirst array: ");
    displayArray(arr1, 5);

    printf("\nSecond array: ");
    displayArray(arr2, 5);

    
    for(i = 0; i < 5; i++) {
        arr3[i] = arr1[i];
    }

    
    for(i = 0; i < 5; i++) {
        arr3[i + 5] = arr2[i];
    }

    
    printf("\nMerged array: ");
    displayArray(arr3, 10);

    return 0;
}
