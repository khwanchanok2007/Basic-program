#include <stdio.h>

int main() {
    int  categoryCode;
    float price_before_vat;
    float totalBill = 0.0;
    float vatAmout = 0.0;

    if (scanf("%f %d", &price_before_vat, &categoryCode ) != 2) {
        return 1;
    } // end if

    if (categoryCode == 1) {
       totalBill = price_before_vat * 1.07;
       vatAmout = totalBill - price_before_vat;
       printf("VAT Amount: %.2f\n", vatAmout);
       printf("Total Price: %.2f\n", totalBill);
    } else if (categoryCode == 2) {
       totalBill = price_before_vat * 1.00;
       vatAmout = totalBill - price_before_vat;
       printf("VAT Amount: %.2f\n", vatAmout);
       printf("Total Price: %.2f\n", totalBill);
    } else if (categoryCode == 3) {
       totalBill = price_before_vat * 1.15;
       vatAmout = totalBill - price_before_vat;
       printf("VAT Amount: %.2f\n", vatAmout);
       printf("Total Price: %.2f\n", totalBill);
    } else{
        printf("Invalid Category\n");
    }
    

    return 0;

}