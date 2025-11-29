#include <stdio.h>

int main()
{
    int termcode;
    float investAmount;
    float aprRate = 0.0;
    float totalInterest = 0.0;

    if (scanf("%d %f", &termcode, &investAmount) != 2)
    {
        return 1;
    }

    switch (termcode)
    {
    case 1:
        if (investAmount < 5000)
        {
            aprRate = 0.03;
        }
        else
        {
            aprRate = 0.04;
        }
        break;
    case 2:
        if (investAmount < 10000)
        {
            aprRate = 0.05;
        }
        else
        {
            aprRate = 0.065;
        }
        break;
    case 3:
        aprRate = 0.08;
        break;
    }

    if (termcode >= 1 && termcode <= 3)
    {
        totalInterest = investAmount * aprRate;
        printf("%.2f\n", totalInterest);
    }
    else
    {
        printf("Invalid Term Code\n");
    }

    return 0;
}