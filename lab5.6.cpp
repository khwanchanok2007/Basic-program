#include <stdio.h>
#define NUM_EMPLOYEES 4

struct Employee
{
    int id;
    int salary;
};

void findMinMaxSalary(struct Employee emps[], int size, int *max, int *min)
{
    *max = emps[0].salary;
    *min = emps[0].salary;

    for (int i = 1; i < size; i++)
    {
        if (emps[i].salary > *max)
        {
            *max = emps[i].salary;
        }

        if (emps[i].salary < *min)
        {
            *min = emps[i].salary;
        }
    }
}

int main()
{
    struct Employee staffData[NUM_EMPLOYEES];
    int maxSalary, MinSalary, i;

    printf("Enter data for %d employees:\n", NUM_EMPLOYEES);
    for (i = 0; i < NUM_EMPLOYEES; i++)
    {
        printf("--- Employee %d ---\n", i + 1);
        printf("Enter ID: ");
        scanf("%d", &staffData[i].id);
        printf("Enter Salary: ");
        scanf("%d", &staffData[i].salary);
    }

    findMinMaxSalary(staffData, NUM_EMPLOYEES, &maxSalary, &MinSalary);

    printf("\n--- EMPLOYEE SALARY SUMMARY ---\n");
    printf("ID      | Salary\n");
    printf("----------------\n");
    for (i = 0; i < NUM_EMPLOYEES; i++)
    {
        printf("%-6d | %d\n", staffData[i].id, staffData[i].salary);
    }
    printf("\nMaximum Salary Found: %d\n", maxSalary);
    printf("Minimum Salary Found: %d\n", MinSalary);
    return 0;
}