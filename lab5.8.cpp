#include <stdio.h>

struct Student
{
    int id;
    int mathScore;
    int scienceScore;
    int englishScore;
    int totalScore;
};

char calculateGrade(int totalScore);
void calculateAverage(int totalScore, float *avg);

int main()
{
    struct Student studentInfo;
    char finalGrade;
    float finalAverage;

    printf("Enter Student ID: ");
    scanf("%d", &studentInfo.id);

    printf("Enter Math Score (out of 100): ");
    scanf("%d", &studentInfo.mathScore);

    printf("Enter Science Score (out of 100): ");
    scanf("%d", &studentInfo.scienceScore);

    printf("Enter English Score (out of 100): ");
    scanf("%d", &studentInfo.englishScore);

    studentInfo.totalScore = studentInfo.mathScore + studentInfo.scienceScore + studentInfo.englishScore;

    calculateAverage(studentInfo.totalScore, &finalAverage);
    finalGrade = calculateGrade(studentInfo.totalScore);

    printf("\n--- STUDENT ACADEMIC REPORT ---\n");
    printf("Student ID: %d\n", studentInfo.id);
    printf("Math Score: %d, Science Score: %d, English Score: %d\n",
           studentInfo.mathScore, studentInfo.scienceScore, studentInfo.englishScore);
    printf("Total Score: %d\n", studentInfo.totalScore);
    printf("Average Score: %.2f\n", finalAverage);
    printf("Final Grade: %c\n", finalGrade);

    return 0;
}

char calculateGrade(int totalScore)
{
    if (totalScore >= 250)
    {
        return 'A';
    }
    else if (totalScore >= 200 && totalScore < 250)
    {
        return 'B';
    }
    else
    {
        return 'C';
    }
}

void calculateAverage(int totalScore, float *avg)
{
    *avg = (float)totalScore / 3;
}