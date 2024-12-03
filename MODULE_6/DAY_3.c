/* //Create a C Program to store the student information and display it using structure.
#include <stdio.h>
// Define a structure to store student information
struct Student {
    char name[50];
    int age;
    float marks;
};
int main() {
    struct Student student;
    // Input student information
    printf("Enter student name: ");
    fgets(student.name, sizeof(student.name), stdin); // Read name including spaces
    printf("Enter student age: ");
    scanf("%d", &student.age);
    printf("Enter student marks: ");
    scanf("%f", &student.marks);
    // Display student information
    printf("\n--- Student Information ---\n");
    printf("Name: %s", student.name); // fgets includes a newline, so no extra \n
    printf("Age: %d\n", student.age);
    printf("Marks: %.2f\n", student.marks);
    return 0;
} */

//Create a C program to calculate the total and average of student using structure.
#include <stdio.h>
struct Student {
    int marks[5]; // Array to store marks of 5 subjects
};
int main() {
    int n, i, j;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    struct Student students[n]; // Array of students
    // Input marks for each student
    for (i = 0; i < n; i++) {
        printf("Enter marks for student %d:\n", i + 1);
        for (j = 0; j < 5; j++) {
            scanf("%d", &students[i].marks[j]);
        }
    }
    // Calculate and display total marks for each student
    for (i = 0; i < n; i++) {
        int total = 0; // Initialize total for the current student
        for (j = 0; j < 5; j++) {
            total += students[i].marks[j];
        }
        printf("Total marks for student %d: %d\n", i + 1, total);
    }
    return 0;
}

