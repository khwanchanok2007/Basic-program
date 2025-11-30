#include <stdio.h>
#define SIZE 5

//calculate Net Balance function
int calculateNetBalance(int *transArray, int size, int *status_ptr) {
    int netBalance = 0;

    for (int i = 0; i < size; i++) {
        netBalance += transArray[i];
    }

    if (netBalance < 0) {
        *status_ptr = 0;
    } else {
        *status_ptr = 1;
    }

    return netBalance;
}

int main() {
    int transaction[SIZE];
    int netBalance;
    int financeStatus;
    int i;

    printf("Enter %d transactions (Income + Expense -):\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        printf("Transaction %d: ", i + 1);
        scanf("%d", &transaction[i]);
    }

    netBalance = calculateNetBalance(transaction, SIZE, &financeStatus);

    printf("\n--- PERSONAL FINANCE REPORT ---\n");
    printf("Transactions Recorded: ");
    for (i = 0; i < SIZE; i++) {
        printf("%d ", transaction[i]);
    }
    printf("\n");
    printf("Net Balance: %d\n", netBalance);
    printf("Status: ");

    if (financeStatus == 0) {
        printf("LOSS");
    } else {
        printf("PROFIT");
    }

    return 0;
}