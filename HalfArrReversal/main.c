#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,arr[100],start=0;
    for(int i=0;i<100;i++)
        arr[i]=0;
    printf("Enter N:\n");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Current array:\n");
    for(int i=0;i<n;i++)
        printf("%d\n",arr[i]);
    int end = n / 2 - 1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    printf("Reversed array:\n");
    for(int i=0;i<n;i++)
        printf("%d\n",arr[i]);
    return 0;
}
