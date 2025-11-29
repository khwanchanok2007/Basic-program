#include <stdio.h>

int main()
{
    int grossSalary;
    float taxRate = 0.0, taxAmount = 0.0, netSalary = 0.0;

    printf("Enter Gross Salary (THB/month, integer): ");
    scanf("%d", &grossSalary);

    if (grossSalary >= 20000 && grossSalary < 50000)
    {
        taxRate = 0.05;
    }
    else if (grossSalary >= 50000)
    {
        taxRate = 0.1;
    }

    taxAmount = grossSalary * taxRate;
    netSalary = grossSalary - taxAmount;

    printf("\n--- SALARY CALCULATION REPORT ---\n");
    printf("Gross Salary: %d THB\n", grossSalary);
    printf("Tax Rate Applied: %.0f%%\n", taxRate * 100);
    printf("Tax Amount Deducted: %.2f THB\n", taxAmount);
    printf("Net Salary: %.2f THB\n", netSalary);

    return 0;
}