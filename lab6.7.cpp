#include <stdio.h>

// Function to compute chance of winning using the x4 rule
float getWinningChance(int outCount) {
    return outCount * 4.0f;
}

int main() {
    int outs;
    float probability;

    printf("Number of outs: ");
    scanf("%d", &outs);

    probability = getWinningChance(outs);

    printf("\n--- POKER PROBABILITY SUMMARY (2 Cards Remaining) ---\n");
    printf("Outs detected: %d\n", outs);
    printf("Estimated chance of winning: %.2f%%\n", probability);

    printf("Result: ");
    if (probability >= 30.0f) {
        printf("Likely TO WIN\n");
    } else {
        printf("Unlikely TO WIN\n");
    }

    return 0;
}