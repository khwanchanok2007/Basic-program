#include <stdio.h>

int calculateArea(int length, int width);

int calculateArea(int length, int width) {
    int area;
    area = length * width;
    return area;
}

int main() {
    int length, width, area;

    printf("Enter rectangle length (integer): ");
    scanf("%d", &length);

    printf("Enter rectangle width (integer): ");
    scanf("%d", &width);

    area = calculateArea(length, width);

    printf("\n--- RECTANGLE AREA REPORT ---\n");
    printf("Length: %d\n", length);
    printf("width: %d\n", width);
    printf("Calculated Area: %d\n", area);

    return 0;
}