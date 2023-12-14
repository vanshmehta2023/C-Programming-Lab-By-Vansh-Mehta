#include <stdio.h>

struct Student {
    char name[50];
    int marks[5];
    int totalMarks;
};

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    struct Student students[numStudents];

    for (int i = 0; i < numStudents; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Enter marks for 5 subjects:\n");
        students[i].totalMarks = 0; 
        for (int j = 0; j < 5; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &students[i].marks[j]);
            students[i].totalMarks += students[i].marks[j];
        }
    }

    printf("\nStudent Details and Total Marks:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("\nStudent %d\nName: %s\nTotal Marks: %d\n", i + 1, students[i].name, students[i].totalMarks);
    }

    return 0;
}