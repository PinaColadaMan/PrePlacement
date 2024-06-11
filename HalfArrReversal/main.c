#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,arr[100];
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
    int half[50];
    for(int i=0;i<=n/2;i++)
        half[n/2-1-i]=arr[i];
    for(int i=0;i<=n/2;i++)
        printf("%d\n",half[i]);
    for(int i=0;i<=n/2;i++)
        arr[n/2-1-i]=half[i];
    printf("Reversed array:\n");
    for(int i=0;i<n;i++)
        printf("%d\n",arr[i]);
    return 0;
}
