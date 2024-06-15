#include <stdio.h>
#include <math.h>

void printDescendingNumbers(int start) {
    int numDigits = (int)log10(start) + 1; // Calculate the number of digits in start
    int num = start;

    for (int i = 0; i < numDigits; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d", num);
            num++;
        }
        printf("\n");
        num = start;
    }
}

int main() {
    int input;

    printf("Enter a number: ");
    scanf("%d", &input);

    printDescendingNumbers(input);

    return 0;
}
