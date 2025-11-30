#include <stdio.h>
#define SIZE 3

int main() {
    int data[SIZE];
    int *ptr;
    int i;

    printf("Enter %d integer elements for the array:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("Element %d: ", i);
        scanf("%d", &data[i]);
    }

    printf("\n--- ARRAY AND POINTER REPORT ---\n");
    printf("Index | Value (Direct) | Value (via pointer) | address\n");
    printf("------------------------------------------------------\n");

    ptr = data;

    for (i = 0; i < SIZE; i++) {
        printf("%5d | %14d | %19d | 0x%llX\n", i, data[i], *(ptr + i), (unsigned long long)(ptr + i));
    }

    return 0;
}