#include <stdio.h>

int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return (sum == num);
}


void printPerfectNumbers(int start, int end) {
    printf("Perfect numbers between %d and %d:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPerfect(i)) {
            printf("%d\n", i);
        }
    }
}

int main() {
    int lower, upper;


    printf("Enter lower bound of the range: ");
    scanf("%d", &lower);
    printf("Enter upper bound of the range: ");
    scanf("%d", &upper);


    printPerfectNumbers(lower, upper);

    return 0;
}
