#include <stdio.h>

int main() {
    int N, i;
    int passSum = 0, failCount = 0;

    scanf("%d", &N);

    int scores[N];

    for (i = 0; i < N; i++) {
        scanf("%d", &scores[i]);

        if (scores[i] >= 50) {
            passSum += scores[i];
        } else {
            failCount++;
        }
    }

    printf("Passing Scores Sum: %d\n", passSum);
    printf("Failing Students Count: %d\n", failCount);

    return 0;
}