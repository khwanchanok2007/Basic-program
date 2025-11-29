#include <stdio.h>

int main()
{
    int SIZE = 5;
    int data[SIZE];
    int i;
    int aboveAverage = 0;
    int total_sum = 0;
    float average = 0.0;

    for (i = 0; i < SIZE; i++)
    {
        printf("Enter score for student %d: ", i + 1);
        scanf("%d", &data[i]);
    }

    for (i = 0; i < SIZE; i++)
    {
        total_sum += data[i];
        average = total_sum / 5;
    }

    for (i = 0; i < SIZE; i++)
    {
        if (data[i] > average)
        {
            aboveAverage++;
        }
    }

    printf("\n--- STUDENT SCORE ANALYSIS REPORT ---\n");
    printf("Recorded Scores: ");
    for (i = 0; i < SIZE; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");
    printf("Total Sum: %d\n", total_sum);
    printf("Average Score: %.2f\n", average);
    printf("Number of Scores Above Average: %d\n", aboveAverage);

    return 0;
}