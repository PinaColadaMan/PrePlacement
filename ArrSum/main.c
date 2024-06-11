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
    int count=0;
    int sum=0;
    printf("N is %d\n",n);
    do
    {

        for(int i=count+1;i<n;i++)
        {
            sum+=arr[i];
            //printf("%d\n",sum);
        }
        arr[count]=sum;
        sum=0;
        count+=1;
    }while(count<n);
    //printf("count %d\n",count);

    printf("final array:\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",arr[i]);
    }

    return 0;
}
