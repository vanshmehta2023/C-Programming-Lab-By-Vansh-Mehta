#include <stdio.h>
union StudentInfo {
    char name[50];
    int rollNumber;
    float cgpa;
};
int main() {
    union StudentInfo student;

    printf("Enter student's name: ");
    scanf("%s", student.name);

    printf("Enter roll number or CGPA: ");
    scanf("%d", &student.rollNumber) ? : scanf("%f", &student.cgpa);

    printf("\nStudent Information:\nName: %s\n%s: %.2f\n",
           student.name,
           student.rollNumber ? "Roll Number" : "CGPA",
           student.rollNumber ? student.rollNumber : student.cgpa);

    return 0;
}
