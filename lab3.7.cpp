#include <stdio.h>

struct SalesRecord {
    char name[50];
    float target;
    float actual;
};

int main() {
    int N, i;
    float grandTotalCommision = 0.0;
    float baseCommision;

    if (scanf("%d", &N) != 1) {
        return 1;
    }

    struct SalesRecord records[N];

    for (i = 0; i < N; i++) {
        if (scanf("%f %f %s", &records[i].target, &records[i].actual, records[i].name) != 3) {
            return 1;
        }

        baseCommision = records[i].actual * 0.10;

        if (records[i].actual >= records[i].target * 1.20) {
            baseCommision += 200.0;
        } else if (records[i].actual >= records[i].target) {
            baseCommision += 50.0;
        } else if (records[i].actual < records[i].target * 0.90) {
            baseCommision -= 100.0;
        }

        grandTotalCommision += baseCommision;
    }

    printf("Grand Total Commision: %.2f\n", grandTotalCommision);

    return 0;
}