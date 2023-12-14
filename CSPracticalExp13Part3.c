#include <stdio.h>

struct Student {
    char name[50];
    int marks[5];
    int totalMarks;
    float average;
};
void calculateTotalAndAverage(struct Student *student) {
    for (int i = 0; i < 5; i++)
        student->totalMarks += student->marks[i];
    student->average = (float)student->totalMarks / 5;
}
void displayStudentInfo(struct Student *student) {
    printf("Student Name: %s\nTotal Marks: %d\nAverage: %.2f\n\n",
           student->name, student->totalMarks, student->average);
}
int main() {
    struct Student students[3];
    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\nName: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter marks for 5 subjects:\n");
        for (int j = 0; j < 5; j++)
            scanf("%d", &students[i].marks[j]);

        calculateTotalAndAverage(&students[i]);
        printf("\n");
    }
    printf("Student Details:\n");
    for (int i = 0; i < 3; i++)
        displayStudentInfo(&students[i]);

    return 0;
}