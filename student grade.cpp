#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
    char grade;
};

int main() {
    struct Student student;

    printf("Enter student name, roll number, and marks: ");
    scanf("%s %d %f", student.name, &student.rollNumber, &student.marks);

    student.grade = (student.marks >= 90) ? 'A' : (student.marks >= 80) ? 'B' : (student.marks >= 70) ? 'C' : (student.marks >= 60) ? 'D' : 'F';

    printf("\nStudent Details:\n");
    printf("Name: %s\n", student.name);
    printf("Roll Number: %d\n", student.rollNumber);
    printf("Marks: %.2f\n", student.marks);
    printf("Grade: %c\n", student.grade);

    return 0;
}

