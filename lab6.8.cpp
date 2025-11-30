#include <stdio.h>
#define SIZE 5

int findAndUpdate(int *arr_ptr, int size, int searchValue, int newValue) {
    int updated = 0;
    
    for (int i = 0; i < size; i++) {
        if (searchValue == arr_ptr[i]) {
            arr_ptr[i] = newValue;
            updated = 1;
        }
    }
    return updated;
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int number[SIZE];
    int searchValue, newVal, status, i;

    printf("Enter %d integer elements for the array:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &number[i]);
    }

    printf("\nEnter value to search (Search Value): ");
    scanf("%d", &searchValue);
    printf("\nEnter value to replace it with (New Value): ");
    scanf("%d", &newVal);

    printf("\n--- ARRAY UPDATE REPORT ---\n");
    printf("Array BEFORE Update: ");
    printArray(number, SIZE);

    status = findAndUpdate(number, SIZE, searchValue, newVal);

    printf("Array AFTER Update: ");
    printArray(number, SIZE);

    printf("Status: ");

    if (status == 0) {
        printf("Failed");
    } else {
        printf("Success");
    }

    return 0;
}