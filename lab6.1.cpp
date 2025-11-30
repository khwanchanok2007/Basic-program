#include <stdio.h>

//increase value function
void increaseValue (int *number_ptr) {
    *number_ptr += 10;
}

int main() {
    int data;

    printf("Enter initial integer value: ");
    scanf("%d", &data);

    printf("\n--- POINTER MODIFICATION REPORT ---\n");
    printf("1. Value BEFORE function call: %d\n", data);

    increaseValue(&data);

    printf("2. Value BEFORE function call: %d\n", data);
}