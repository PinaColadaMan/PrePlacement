#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), compare);

    int d = arr[1] - arr[0];

    for (int i = 2; i < n; i++) {
        if (arr[i] - arr[i-1] != d) {
            printf("No\n");
            return 0;
        }
    }

    printf("Yes\n");

    return 0;
}
