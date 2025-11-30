#include <stdio.h>

struct Student {
    int studentID;
    int score;
    char grade;
};

void calculateGrade (struct Student *s_ptr) {
    if (s_ptr->score >= 80) {
        s_ptr->grade = 'A';
    } else if (s_ptr->score >= 70) {
        s_ptr->grade = 'B';
    } else if (s_ptr->score >= 60) {
        s_ptr->grade = 'C';
    } else if (s_ptr->score >= 50) {
        s_ptr->grade = 'D';
    } else {
        s_ptr->grade = 'F';
    }
    
}

void displayMenu() {
    printf("\n--- STUDENT RECORD MENU ---\n");
    printf("1. Input/Update Student Data\n");
    printf("2. View Student Report\n");
    printf("3. Exit Program\n");
    printf("Enter choice: ");
}

int main() {
    struct Student record = {0, 0, 'U'};
    int choice;

    do {
        displayMenu();
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter Student ID: ");
                scanf("%d", &record.studentID);
                printf("Enter Score (0-100): ");
                scanf("%d", &record.score);

                calculateGrade(&record);

                printf("Data updated. Grade calculated.\n");
                break;
            case 2:
                if (record.studentID == 0) {
                    printf("No student data has been entered yet (ID  is 0).\n");
                } else {
                    printf("\n--- STUDENT REPORT ---\n");
                    printf("ID: %d\n", record.studentID);
                    printf("Score: %d\n", record.score);
                    printf("Grade: %c\n", record.grade);
                }
                break;
            case 3:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
            }
    } while (choice != 3);

    return 0;
}