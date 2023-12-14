#include <stdio.h>

struct Student {
    char name[50];
    int marks[5];
};

void writeStudentData(const struct Student *student, FILE *file) {
    fprintf(file, "%s", student->name);
    for (int i = 0; i < 5; i++) fprintf(file, " %d", student->marks[i]);
    fprintf(file, "\n");
}

void readStudentData(struct Student *student, FILE *file) {
    fscanf(file, "%s", student->name);
    for (int i = 0; i < 5; i++) fscanf(file, "%d", &student->marks[i]);
}

int main() {
    FILE *file = fopen("student_data.txt", "w");

    if (!file) {
        printf("Unable to open file for writing.\n");
        return 1;
    }

    struct Student students[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\nName: ", i + 1);
        scanf("%s", students[i].name);

        printf("Enter marks for 5 subjects:\n");
        for (int j = 0; j < 5; j++) scanf("%d", &students[i].marks[j]);

        writeStudentData(&students[i], file);
    }

    fclose(file);
    file = fopen("student_data.txt", "r");
    if (!file) {
        printf("Unable to open file for reading.\n");
        return 1;
    }
    printf("Student Details read from the file:\n");

    struct Student readStudent;
    for (int i = 0; i < 3; i++) {
        readStudentData(&readStudent, file);
        printf("Student %d\nName: %s\nMarks: %d %d %d %d %d\n\n", i + 1, readStudent.name,
               readStudent.marks[0], readStudent.marks[1], readStudent.marks[2],
               readStudent.marks[3], readStudent.marks[4]);
    }
    fclose(file);
    return 0;
}