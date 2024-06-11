#include <stdio.h>
#include <stdlib.h>

int main()
{
    int large=0,arr[10],n,i;
    printf("Enter n:\n");
    scanf("%d",&n);
    printf("Enter  your array:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
        for(int j=i;j<n-1;j++)
            if(arr[i]<arr[j+1])
            {
                int temp=arr[i];
                arr[i]=arr[j+1];
                arr[j+1]=temp;
            }
    for(i=0;i<n;i++)
        printf("%d",arr[i]);
    return 0;
}
// descending order of four numbers: Assignment
// print 1-1000 without looping
