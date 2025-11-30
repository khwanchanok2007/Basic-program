#include <stdio.h>

//calculate change amount
int calculateChangeAmount(int cost, int paid) {
    if (paid >= cost) {
        return paid - cost;
    } else {
        return -1;
    }
}

//count denomination
int countDenomination(int *changeRemaining, int domination) {
    int count = *changeRemaining / domination;
    *changeRemaining = *changeRemaining % domination;
    return count;
}

int main() {
    int totalCost, amountPaid, ChangeAmount, remainingChange;
    int count1000, count500, count100, count50, count20, count10, count5, count2, count1;

    printf("Enter Total Cost (integer): ");
    scanf("%d", &totalCost);

    printf("Enter Amount Paid (integer): ");
    scanf("%d", &amountPaid);

    ChangeAmount = calculateChangeAmount(totalCost, amountPaid);

    if (ChangeAmount == -1) {
        printf("Change Amount: -1\n");
        printf("\nERROR: Amount Paid is less than Total Cost.\n");
        return 1;
    }

    remainingChange = ChangeAmount;

    count1000 = countDenomination(&remainingChange, 1000);
    count500 = countDenomination(&remainingChange, 500);
    count100 = countDenomination(&remainingChange, 100);
    count50 = countDenomination(&remainingChange, 50);
    count20 = countDenomination(&remainingChange, 20);
    count10 = countDenomination(&remainingChange, 10);
    count5 = countDenomination(&remainingChange, 5);
    count2 = countDenomination(&remainingChange, 2);
    count1 = countDenomination(&remainingChange, 1);

    printf("\n--- CHANGE CALCULATION REPORT ---\n");
    printf("Total Cost: %d\n", totalCost);
    printf("Amount Paid: %d\n", amountPaid);
    printf("Change Amount: %d\n", ChangeAmount);

    printf("\nDenomination Breakdown:\n");

    if (count1000 > 0) { printf("1000 Baht: %d\n", count1000); }
    if (count500 > 0) { printf("500 Baht: %d\n", count500); }
    if (count100 > 0) { printf("100 Baht: %d\n", count100); }
    if (count50 > 0) { printf("50 Baht: %d\n", count50); }
    if (count20 > 0) { printf("20 Baht: %d\n", count20); }
    if (count10 > 0) { printf("10 Baht: %d\n", count10); }
    if (count5 > 0) { printf("5 Baht: %d\n", count5); }
    if (count2 > 0) { printf("2 Baht: %d\n", count2); }
    if (count1 > 0) { printf("1 Baht: %d\n", count1); }

    return 0;
}