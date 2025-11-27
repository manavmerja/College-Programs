#include <stdio.h>
#include <stdlib.h>

void writeMarksToFile(const char *filename) {
    FILE *file = fopen(filename, "wb");
    if (file == NULL) {
        printf("Error: Could not open the file for writing.\n");
        return;
    }

    int n, mark;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    printf("Enter marks for %d students:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Student %d: ", i + 1);
        scanf("%d", &mark);
        putw(mark, file);
    }

    fclose(file);
    printf("Marks written to the file successfully.\n");
}

void readMarksFromFile(const char *filename) {
    FILE *file = fopen(filename, "rb");
    if (file == NULL) {
        printf("Error: Could not open the file for reading.\n");
        return;
    }

    printf("Marks of students:\n");
    int mark;
    while ((mark = getw(file)) != EOF) {
        printf("%d\n", mark);
    }

    fclose(file);
}

int main() {
    const char *filename = "marks.dat";
    int choice;

    do {
        printf("\nStudent Marks Recording System\n");
        printf("1. Write marks to file\n");
        printf("2. Read marks from file\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                writeMarksToFile(filename);
                break;
            case 2:
                readMarksFromFile(filename);
                break;
            case 3:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}
