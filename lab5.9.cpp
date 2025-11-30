#include <stdio.h>
#include <stdlib.h>

struct Product {
    char itemID[10];
    float costPrice;
    float sellPrice;
    int stockQuantity;
};

float calculateTotalProfit(float cost, float sell, int qty) {
    float unitPrice, totalProfit;

    unitPrice = sell - cost;
    totalProfit = unitPrice * qty;

    return totalProfit;
}

float calculateProfitPercentage(float cost, float sell) {
    float profitPercentage, unitPrice;

    unitPrice = sell - cost;
    profitPercentage = (unitPrice / cost) * 100;

    return profitPercentage;
}

int main() {
    struct Product item;
    int numericID;
    float totalProfit;
    float profitPercent;

    printf("Enter Item ID: ");
    scanf("%s", &item.itemID);

    //to get the number out of P001
    numericID = atoi(item.itemID + 1);

    printf("Enter Cost Price per unit: ");
    scanf("%f", &item.costPrice);

    printf("Enter Sell Price per unit: ");
    scanf("%f", &item.sellPrice);

    printf("Enter Stock Quantity: ");
    scanf("%d", &item.stockQuantity);

    totalProfit = calculateTotalProfit(item.costPrice, item.sellPrice, item.stockQuantity);
    profitPercent = calculateProfitPercentage(item.costPrice, item.sellPrice);

    printf("\n--- INVENTORY PROFIT REPORT ---\n");
    printf("Item ID: %d\n", numericID);
    printf("Cost Price: %.2f, Sell Price: %.2f, Stock: %d\n", item.costPrice, item.sellPrice, item.stockQuantity);
    printf("Total Profit: %.2f\n", totalProfit);
    printf("Profit Percentage: %.2f%%\n", profitPercent);

    if (totalProfit > 0) {
        printf("Status: Profit!");
    } else if (totalProfit == 0) {
        printf("Status: Break Even.");
    } else {
        printf("Status: Loss!");
    }

    return 0;
}