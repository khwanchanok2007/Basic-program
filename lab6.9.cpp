#include <stdio.h>
#define MONTHS 3

// Function to calculate total revenue/expense and net profit
int analyzeProfitability(int *rev_ptr, int *exp_ptr, int size, int *status_ptr) {
    int totalRevenue = 0, totalExpense = 0;

    for (int i = 0; i < size; i++) {
        totalRevenue += rev_ptr[i];
        totalExpense += exp_ptr[i];
    }

    int netProfit = totalRevenue - totalExpense;
    *status_ptr = (netProfit >= 0) ? 1 : 0;
    return netProfit;
}

// Get monthly data with full input validation (request re-entry)
void getMonthlyData(int array[], int size, const char *type) {
    printf("\nEnter %d months of %s values:\n", size, type);

    for (int i = 0; i < size; i++) {
        while (1) {
            printf("Month %d %s: ", i + 1, type);
            if (scanf("%d", &array[i]) == 1) break;

            printf("ERROR: Invalid input. Enter an integer only!\n");
            while (getchar() != '\n'); // clear input buffer
        }
    }
}

// Display results clearly in table format
void printMonthlyData(int array[], int size, const char *type) {
    long total = 0;

    printf("\n%-10s | VALUE\n", type);
    printf("---------------------\n");
    for (int i = 0; i < size; i++) {
        printf("Month %-3d | %d\n", i + 1, array[i]);
        total += array[i];
    }
    printf("---------------------\n");
    printf("TOTAL %-4s | %ld\n", type, total);
}

int main() {
    int monthlyReve[MONTHS], monthlyExpen[MONTHS];
    int netProfit, businessStatus;

    getMonthlyData(monthlyReve, MONTHS, "REVENUE");
    getMonthlyData(monthlyExpen, MONTHS, "EXPENSE");

    netProfit = analyzeProfitability(monthlyReve, monthlyExpen, MONTHS, &businessStatus);

    printf("\n===== 3-MONTH FINANCIAL ANALYSIS REPORT =====\n");
    printMonthlyData(monthlyReve, MONTHS, "REVENUE");
    printMonthlyData(monthlyExpen, MONTHS, "EXPENSE");

    printf("\nNET PROFIT : %d\n", netProfit);
    printf("BUSINESS STATUS : %s\n", businessStatus ? "PROFITABLE" : "UNPROFITABLE");

    return 0;
}