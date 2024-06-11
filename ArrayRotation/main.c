#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,arr[100];
    for(int i=0;i<100;i++)
    {
        arr[i]=0;
    }
    printf("Enter N:\n");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Current array:\n");
    for(int i=0;i<n;i++)
    {

        printf("%d\n",arr[i]);
    }
    int rot;
    printf("Enter number of rotations:\n");
    scanf("%d",&rot);
    int count=0;
    while(rot!=0)
    {
        for(int i=n-1;i>=0;i--)
        {
            int temp1=arr[i];
            arr[i+1]=temp1;
        }
        int temp=arr[n];
        arr[0]=temp;
        arr[n]=0;
        rot--;
    }
    printf("Rotated array:\n");
    for(int i=0;i<n;i++)
    {

        printf("%d\n",arr[i]);
    }
    return 0;
}
