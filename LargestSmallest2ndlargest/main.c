#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,arr[100],large=0,large2=0,small,small2,temp[100],temp2[100];
    for(int i=0;i<100;i++)
        arr[i]=0;
    printf("Enter N:\n");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        temp[i]=arr[i];
        temp2[i]=arr[i];
    }
    /*for(int i=0;i<n;i++)
    {
        printf("%d\n",temp[i]);
    }*/
    small=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>large)
            large=arr[i];
        if(arr[i]<=small)
            small=arr[i];
    }
    small2=30000;
    for(int i=0;i<n;i++)
    {
        if(temp[i]==large)
            temp[i]=0;
        if(temp[i]>large2)
            large2=temp[i];
    }
    for(int i=0;i<n;i++)
    {
        if(temp2[i]==small)
            temp2[i]=30000;
        if(temp2[i]<small2)
            small2=temp2[i];
    }
    printf("Largest is %d\n2nd Largest is %d\nSmallest is %d\n2nd Smallest is %d\n",large,large2,small,small2);
    return 0;
}
