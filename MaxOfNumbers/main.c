#include <stdio.h>
#include <stdlib.h>

int main()
{
    int large=0,arr[10],n,i;
    printf("Enter n:\n");
    scanf("%d",&n);
    printf("Enter  your array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>large)
        {
            large=arr[i];
        }
    }
    printf("Largest is %d.",large);
    return 0;
}
