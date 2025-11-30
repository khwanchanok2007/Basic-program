#include <stdio.h>

// calculate Sum Product function
void calculateSumProduct(int num1, int num2, int *sum_ptr, int *prod_ptr)
{
    *sum_ptr = num1 + num2;
    *prod_ptr = num1 * num2;
}

int main()
{
    int valA, valB;
    int resultSum, resultProduct;

    printf("Enter first integer (Val A) : ");
    scanf("%d", &valA);

    printf("Enter second integer (Val B) : ");
    scanf("%d", &valB);

    calculateSumProduct(valA, valB, &resultSum, &resultProduct);

    printf("\n--- CALCULATION REPORT ---\n");
    printf("Input Values: A = %d, B = %d\n", valA, valB);
    printf("--------------------------------------\n");
    printf("Result Sum (A + B): %d\n", resultSum);
    printf("Result Product (A * B): %d\n", resultProduct);
}