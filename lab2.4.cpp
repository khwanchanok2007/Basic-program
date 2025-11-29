#include <stdio.h>

int main() {
    float principal, monthPayment, interest;
    int monthCount = 0;
    const float INTEREST_RATE = 0.01;
    const float PENALTY = 10.0;
    
    if (scanf("%f %f", &principal, &monthPayment) != 2) {
        return 1;
    }

    while (principal > 0) {
        monthCount++;
        interest = principal * INTEREST_RATE;
        principal += interest;

        if (monthPayment < interest) {
            principal += PENALTY;
        }

        principal -= monthPayment;
        printf("Month %d: Remaining %.2f\n", monthCount, principal);

        if (monthCount >= 10 && principal > 0) {
            printf("Loan settled in 10+ months.\n");
            return 0;
        }
    }

    printf("Loan settled in %d months.\n", monthCount);
    return 0;
}