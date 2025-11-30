#include <stdio.h>
#define NUM_STUDENTS 3

struct Student {
    int id;
    int score;
};

int findMaxScoreID (struct Student Students[], int size) {
    int maxScoreID = 0;
    for (int i = 1; i < size; i++) {
        if (Students[i].score > Students[maxScoreID].score) {
            maxScoreID = i;
        }
    }
    return Students[maxScoreID].id;
}

int main() {
    struct Student classData[NUM_STUDENTS];
    int topStudentID;
    int i;

    printf("Enter data for %d students:\n", NUM_STUDENTS);
    for(i = 0; i < NUM_STUDENTS; i++) {
        printf("\n--- STUDENT %d ---\n", i+1);
        printf("Enter ID: ");
        scanf("%d", &classData[i].id);
        printf("Enter Score: ");
        scanf("%d", &classData[i].score);
    }

    topStudentID = findMaxScoreID(classData, NUM_STUDENTS);

    printf("\n--- STUDENT SCORE REPORT ---\n");
    printf("ID      | Score\n");
    printf("--------|------\n");
    for (i = 0; i < NUM_STUDENTS; i++) {
        printf("%-6d | %d\n", classData[i].id, classData[i].score);
    }
    printf("\nTOP PERFORMER ID: %d\n", topStudentID);

    return 0;
}