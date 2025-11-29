#include <stdio.h>

int main() {
    int choice;
    int cokeP = 15;
    int waterP = 10;
    int snackP = 25;
    float totalCost = 0.0;
    float paidAmount, change;

    do {
        printf("1. Coke: 15.00 baht\n");
        printf("2. Water: 10.00 baht\n");
        printf("3. Snack: 10.00 baht\n");
        printf("4. Exit/pay\n");
        printf("Current Total: %.2f\n", totalCost);

        printf("Select item (1-4): ");
        if (scanf("%d", &choice) != 1) {
            break;
        }

        switch (choice) {
            case 1:
                totalCost += cokeP;
                printf("Item added. Current Total: %.2f\n", totalCost);
                break;
            case 2:
                totalCost += waterP;
                printf("Item added. Current Total: %.2f\n", totalCost);
                break;
            case 3:
                totalCost += snackP;
                printf("Item added. Current Total: %.2f\n", totalCost);
                break;
            default:
                printf("Invalid choice.\n");
                break;
        }
    } while (choice != 4);
    
    if (totalCost > 0.0) {
        printf("Total due: %.2f\n", totalCost);
        printf("Enter paid amount: ");
        if (scanf("%f", &paidAmount) != 1) {
            return 1;
        }

        if (paidAmount >= totalCost) {
            change = paidAmount - totalCost;
            printf("Purchase Sucessful. Change: %.2f\n", change);
        } else {
            printf("Insufficinet payment. Purchase cancelled.\n");
        }
    } else {
        printf("No items purchased. Goodbye\n");
    }

    return 0;
}