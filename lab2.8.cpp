#include <stdio.h>

int main() {
    int N, i;
    int studentId[100], score[100], totalClasses[100], absentClasses[100];
    float attendencePercent[100];
    int passCount = 0;
    int failCount = 0;

    if (scanf("%d", &N) != 1) {
        return 1;
    }

    for (i = 0; i < N; i++) {
        if (scanf("%d %d %d %d", &studentId[i], &score[i], &totalClasses[i], &absentClasses[i]) != 4) {
            break;
        }

        attendencePercent[i] = (float)(totalClasses[i] - absentClasses[i]) / totalClasses[i] * 100.0;
    }

    for (i = 0; i < N; i++) {
        if (attendencePercent[i] >= 75 && score[i] >= 50) {
            printf("Student %d: PASS\n", studentId[i]);
            passCount++;
        } else if (attendencePercent[i] < 75 && score[i] < 50) {
            printf("Student %d: FAIL - Both Score and Attendance\n", studentId[i]);
            failCount++;
        } else if (attendencePercent[i] < 75) {
            printf("Student %d: FAIL - Low Attendence(%.2f%%)\n", studentId[i], attendencePercent[i]);
            failCount++;
        } else {
            printf("Student %d: FAIL - Low score\n", studentId[i]);
            failCount++;
        }
    }

    printf("\n--- Summary ---\n");
    printf("Total PASS: %d\n", passCount);
    printf("Total FAIL: %d\n", failCount);

    return 0;
}