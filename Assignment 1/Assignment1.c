#include <stdio.h>

int main() {
    char name[50];
    int grade1, grade2, grade3;
    int total, studentCount = 0;
    float average, overallAverage = 0;
    char choice;

    printf("================================\n");
    printf("   Student Grade Management System\n");
    printf("================================\n");

    do {
        printf("\nEnter student name: ");
        scanf(" %[^\n]", name);  // Read full name including spaces

        printf("Enter grade for subject 1 (0-100): ");
        scanf("%d", &grade1);
        printf("Enter grade for subject 2 (0-100): ");
        scanf("%d", &grade2);
        printf("Enter grade for subject 3 (0-100): ");
        scanf("%d", &grade3);

        total = grade1 + grade2 + grade3;
        average = total / 3.0;  // Ensure floating point division

        printf("\nStudent: %s\n", name);
        printf("Total: %d\n", total);
        printf("Average: %.2f\n", average);
        printf("Result: %s\n", (average >= 50) ? "Pass" : "Fail");

        // Update overall statistics
        overallAverage += average;
        studentCount++;

        printf("\nEnter another student? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y');

    if (studentCount > 0) {
        overallAverage /= studentCount;
        printf("\nTotal Students: %d\n", studentCount);
        printf("Overall Average: %.2f\n", overallAverage);
    }

    return 0;
}