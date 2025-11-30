#include <stdio.h>
#define SIZE 5

/*
    getArraySum
    - Loops through an array and returns the sum of all elements.
*/
int getArraySum(int values[], int size)
{
    int sum = 0; // initialize accumulator
    for (int i = 0; i < size; i++)
    {
        sum += values[i];
    }
    return sum;
}

int main()
{
    int data[SIZE];
    int sum;
    float avg;

    /* Input section */
    printf("Enter %d integers:\n", SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        scanf("%d", &data[i]);
    }

    /* Calculation section */
    sum = getArraySum(data, SIZE);
    avg = (float)sum / SIZE;

    /* Output report */
    printf("\n--- ARRAY STATISTICS REPORT ---\n");
    printf("Numbers Entered : ");
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");

    printf("Total Sum       : %d\n", sum);
    printf("Average Value   : %.2f\n", avg);

    return 0;
}