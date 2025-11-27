#include <stdio.h>
// This practicle is wrritten By 24DCE074_MANAV_MERJA
#define MAX_STUDENTS 100
void displayWelcome();                          
int collectNumberOfStudents();                  
void collectAndDisplayGrades(int count);        
float calculateAverageGrade(int count);          
int main() {
    displayWelcome();                            
    int numberOfStudents = collectNumberOfStudents();
    collectAndDisplayGrades(numberOfStudents);  
    float average = calculateAverageGrade(numberOfStudents);
    printf("The average grade of the students is: %.2f\n", average);
    return 0;
}
void displayWelcome() {
    printf("Welcome to CHARUSAT!\n");
}
int collectNumberOfStudents() {
    int count;
    printf("Enter the number of students: ");
    scanf("%d", &count);
    if (count > MAX_STUDENTS) {
        printf("Maximum number of students allowed is %d. Setting count to %d.\n", MAX_STUDENTS, MAX_STUDENTS);
        count = MAX_STUDENTS;
    }
    return count;
}
void collectAndDisplayGrades(int count) {
    int grades[MAX_STUDENTS]; 
    printf("Enter the grades of %d students:\n", count);
    for (int i = 0; i < count; i++) {
        printf("Grade of student %d: ", i + 1);
        scanf("%d", &grades[i]);
    }
    printf("The grades entered are:\n");
    for (int i = 0; i < count; i++) {
        printf("Student %d: %d\n", i + 1, grades[i]);
    }
}
float calculateAverageGrade(int count) {
    int grades[MAX_STUDENTS];
    int sum = 0;
    printf("Enter the grades again to calculate the average:\n");
    for (int i = 0; i < count; i++) {
        printf("Grade of student %d: ", i + 1);
        scanf("%d", &grades[i]);
        sum += grades[i];
    }
    return (float)sum / count;
    printf("\n 24DCE019_RAJ\n");
}
