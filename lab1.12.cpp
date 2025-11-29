#include <stdio.h>

int main() {
    int planCode;
    float dataUsage_GB;
    float totalBill = 0.0;
    
    // ตรวจสอบว่ารับค่าได้ครบ 2 ตัว
    if (scanf("%d %f", &planCode, &dataUsage_GB) != 2) {
        printf("Input Error\n");
        return 1;
    }

    if (planCode == 1)
    {
        // Plan Code 1 (Basic Plan): 299 บาท, ฟรี 10 GB, เกินคิด 10 บาท/GB
        const float BASE_PRICE = 299.0;
        totalBill = BASE_PRICE;

        if (dataUsage_GB > 10)
        {
            // แก้ไข 1: ใช้ตัวแปร dataUsage_GB
            float excess_GB = dataUsage_GB - 10.0;
            totalBill += (10.0 * excess_GB);
        }
        
        // แก้ไข 2: พิมพ์ผลลัพธ์เพียงครั้งเดียว
        printf("%.2f\n", totalBill);

    } 
    else if (planCode == 2)
    {
        const float BASE_PRICE = 599.0;
        const float FIXED_PENALTY = 50.0;
        totalBill = BASE_PRICE;

        if (dataUsage_GB > 20)
        {
            float excess_GB = dataUsage_GB - 20.0;
            totalBill += FIXED_PENALTY;
            totalBill += (5.0 * excess_GB);
        }
        
        printf("%.2f\n", totalBill);
    }
    else {
        printf("Invalid Plan Code\n");
    }
    
    return 0;
}