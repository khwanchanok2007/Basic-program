#include <stdio.h>

struct Campaign {
    char name[50];
    float productPrice;
    int salesCount;
    float adSpend;
};


int main () {
    int N, i;
    float comissionRate = 0.0;
    float totalRevenue, totalComission, netProfitLoss;

    if (scanf("%d", &N) != 1) {
        return 1;
    }

    struct Campaign campaigns[N];
    
    for (i = 0; i < N; i++) {
        if (scanf("%s %f %d %f", campaigns[i].name, &campaigns[i].productPrice, &campaigns[i].salesCount, &campaigns[i].adSpend) != 4) {
            return 1;
        }

        totalRevenue = campaigns[i].salesCount * campaigns[i].productPrice;

        if (campaigns[i].salesCount >= 20) {
            comissionRate = 0.2;
        } else if (campaigns[i].salesCount >= 10) {
            comissionRate = 0.15;
        } else {
            comissionRate = 0.1;
        }

        totalComission = totalRevenue * comissionRate;

        netProfitLoss = totalComission - campaigns[i].adSpend;

        printf("---Campaign: %s ---\n", campaigns[i].name);
        printf("Sales: %d, Ad spend: %.2f\n", campaigns[i].salesCount, campaigns[i].adSpend);
        printf("Rate Used: %.0f%%\n", comissionRate * 100);
        printf("Calculation: (%.2f * %.0f%%) - %.2f = %.2f\n", totalRevenue, comissionRate * 100, campaigns[i].adSpend, netProfitLoss);
        printf("Net Result: %.2f\n", netProfitLoss);
    }
}