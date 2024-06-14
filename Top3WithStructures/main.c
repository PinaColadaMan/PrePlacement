#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int roll_no;
    char name[50];
    float marks[3];
    float total;
};

void displayStudent(struct student s) {
    printf("\nStudent Details:\n");
    printf("Roll number: %d\n", s.roll_no);
    printf("Name: %s\n", s.name);
    printf("Marks: %.2f, %.2f, %.2f\n", s.marks[0], s.marks[1], s.marks[2]);
    printf("Total Score: %.2f\n", s.total);
}

void displayTopStudent(struct student students[], int num_students) {
    int top_index = 0;
    for (int i = 1; i < num_students; i++) {
        if (students[i].total > students[top_index].total) {
            top_index = i;
        }
    }
    printf("\nStudent with the highest total marks:\n");
    displayStudent(students[top_index]);
}

int main() {
    struct student students[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Enter roll number: ");
        scanf("%d", &students[i].roll_no);
        getchar();

        printf("Enter name: ");
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        students[i].total = 0;
        for (int j = 0; j < 3; j++) {
            printf("Enter marks for subject %d: ", j + 1);
            scanf("%f", &students[i].marks[j]);
            students[i].total += students[i].marks[j];
        }
        getchar();  // To consume the newline character left by scanf
    }

    for (int i = 0; i < 3; i++) {
        displayStudent(students[i]);
    }

    displayTopStudent(students, 3);

    return 0;
}
