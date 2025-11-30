#include <stdio.h>
#define SIZE 5

void sortArrayAscending(int array[], int size);
void printArray(int array[], int size);

int main()
{
    int number[SIZE];
    int originalCopy[SIZE];
    int i;

    printf("Enter %d integer numbers for sorting:\n", SIZE);
    for (i = 0; i < SIZE; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &number[i]);
        originalCopy[i] = number[i];
    }

    sortArrayAscending(number, SIZE);

    printf("\n--- ARRAY SORTING REPORT ---\n");
    printf("Original array: ");
    printArray(originalCopy, SIZE);

    printf("Sorted Array (Ascending): ");
    printArray(number, SIZE);

    return 0;
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void sortArrayAscending(int array[], int size)
{
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] > array[j])
            {
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}