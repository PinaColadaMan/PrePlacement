#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student {
    int roll_no;
    char name[50];
    float score;
};

void displayStudent(struct student s) {
    printf("\nStudent Details:\n");
    printf("Roll number: %d\n", s.roll_no);
    printf("Name: %s\n", s.name);
    printf("Score: %.2f\n", s.score);
}

int main() {
    struct student s1;

    printf("Enter roll number: ");
    scanf("%d", &s1.roll_no);
    getchar();

    printf("Enter name: ");
    fgets(s1.name, sizeof(s1.name), stdin);
    s1.name[strcspn(s1.name, "\n")] = '\0';

    printf("Enter score: ");
    scanf("%f", &s1.score);

    displayStudent(s1);

    return 0;
}
