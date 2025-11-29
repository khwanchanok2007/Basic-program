#include <stdio.h>

struct Employee {
    int id;
    int grossSalary;
    int bonus;
    int totalIncome;
};

int calculateNetSalary(int totalIncome);

int calculateNetSalary(int totalIncome) {
    int netSalary;
    float taxRate, taxAmount;
    if (totalIncome > 30000) {
        taxRate = 0.1;
    } else {
        taxRate = 0.05;
    }

    taxAmount = totalIncome * taxRate;
    netSalary = totalIncome - (int)taxAmount;

    return netSalary;
}

int main() {
    struct Employee emp;
    int netSalary;

    printf("Enter Employee ID: ");
    scanf("%d", &emp.id);
    printf("Enter Gross Salary: ");
    scanf("%d", &emp.grossSalary);
    printf("Enter Bonus: ");
    scanf("%d", &emp.bonus);

    emp.totalIncome = emp.grossSalary + emp.bonus;
    netSalary = calculateNetSalary(emp.totalIncome);

    printf("\n--- EMPLOYEE SALARY REPORT ---\n");
    printf("ID: %d\n", emp.id);
    printf("Gross Salary: %d\n", emp.grossSalary);
    printf("Bonus: %d\n", emp.bonus);
    printf("Total Income: %d\n", emp.totalIncome);
    printf("Net Salary: %d\n", netSalary);

    return 0;
}