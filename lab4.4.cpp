#include <stdio.h>

int main()
{
    int SIZE = 5;
    int number[SIZE];
    int even_count = 0;
    int odd_count = 0;
    int i;

    for (i = 0; i < SIZE; i++)
    {
        printf("Enter integer number %d: ", i + 1);
        scanf("%d", &number[i]);
    }

    for (i = 0; i < SIZE; i++)
    {
        if (number[i] % 2 == 0)
        {
            even_count++;
        }
        else
        {
            odd_count++;
        }
    }

    printf("\n--- NUMBER CLASSIFICATION REPORT --\n");
    printf("Recorded Numbers: ");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", number[i]);
    }
    printf("\n");
    printf("Total Even Numbers Found: %d\n", even_count);
    printf("Total Odd Numbers Found: %d\n", odd_count);

    return 0;
}