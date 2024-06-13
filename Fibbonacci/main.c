#include <stdio.h>

void fibonacci(int n) {
    int fib_series[n];
    fib_series[0] = 0;
    fib_series[1] = 1;
    for (int i = 2; i < n; i++) {
        fib_series[i] = fib_series[i-1] + fib_series[i-2];
    }
    for (int i = 0; i < n; i++)
        printf("%d\n", fib_series[i]);
}

int main()
{
    int n;
    printf("Enter n:\n");
    scanf("%d",&n);
    fibonacci(n);  // Output: 0 1 1 2 3 5 8 13 21 34
    return 0;
}
