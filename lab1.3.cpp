#include <stdio.h>
int main()
{
    int num1, num2, operationcode, result;

    if (scanf("%d %d %d", &num1, &num2, &operationcode) != 3)
    {
        return 1;
    }

    switch (operationcode)
    {
    case 1:
        result = num1 + num2;
        printf("%d", result);
        break;
    case 2:
        result = num1 - num2;
        printf("%d", result);
        break;
    case 3:
        result = num1 * num2;
        printf("%d", result);
        break;
    case 4:
        result = num1 / num2;
        printf("%d", result);
        break;
    default:
        printf("invalid operation");
        break;
    }
    return 0;
}