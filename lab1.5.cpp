#include <stdio.h>

int main()
{
    int number;
    int evenSum = 0;
    int oddSum = 0;

    if (scanf("%d", &number) != 1)
    {
        return 1;
    } // end if

    while (number != 0)
    {
        if (number % 2 == 0)
        {
            evenSum += number;
        }
        else if (number % 2 != 0)
        {
            oddSum += number;
        }

        if (scanf("%d", &number) != 1)
        {
            break;
        } // end if
    }

    printf("Even Sum %d\n ", evenSum);
    printf("Odd Sum %d\n ", oddSum);
}