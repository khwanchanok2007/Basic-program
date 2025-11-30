#include <stdio.h>
#define NUM_STUDENTS 4

struct Student
{
    int id;
};

int checkIDExistence(struct Student students[], int size, int searchID)
{
    for (int i = 0; i < size; i++)
    {
        if (students[i].id == searchID)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    struct Student idList[NUM_STUDENTS];
    int searchID;
    int foundStatus;
    int i;

    printf("Enter IDs for %d students:\n", NUM_STUDENTS);
    for (i = 0; i < NUM_STUDENTS; i++)
    {
        printf("Student %d ID: ", i + 1);
        scanf("%d", &idList[i].id);
    }

    printf("\nEnter ID to search: ");
    scanf("%d", &searchID);

    printf("\n--- ID SEARCH REPORT ---\n");
    printf("Recorded IDs: ");
    for (i = 0; i < NUM_STUDENTS; i++)
    {
        printf("%d ", idList[i].id);
    }
    printf("\n");
    printf("Search ID: %d\n", searchID);

    foundStatus = checkIDExistence(idList, NUM_STUDENTS, searchID);

    if (foundStatus == 0)
    {
        printf("ID NOT FOUND in the system");
    }
    else
    {
        printf("ID FOUND in the system");
    }

    return 0;
}