#include <stdio.h>

void seeAndTellSequence(int n) {
    if (n < 1) {
        printf("Invalid input. Number of terms should be at least 1.\n");
        return;
    }

    int sequence[n];
    sequence[0] = 1;

    printf("See-and-tell sequence:\n");
    printf("%d\n", sequence[0]);

    for (int i = 1; i < n; i++) {
        int count = 1;
        int current = sequence[i - 1];

        int nextTerm = 0;
        while (current > 0) {
            int lastDigit = current % 10;
            current /= 10;

            while (current % 10 == lastDigit) {
                count++;
                current /= 10;
            }

            nextTerm = count * 10 + lastDigit;
            count = 1;
        }

        sequence[i] = nextTerm;
        printf("%d\n", sequence[i]);
    }
}

int main() {
    int numTerms;

    printf("Enter the number of terms to print: ");
    scanf("%d", &numTerms);

    seeAndTellSequence(numTerms);

    return 0;
}
