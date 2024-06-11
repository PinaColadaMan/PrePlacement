#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long int num;
    int max /*, arr[100]*/, large=0;
    printf("Enter num:\n");
    scanf("%l
          ld",&num);
    /*for(i=0;i<100;i++)
        {
            arr[i]=0;
        }
    while(num>0)
    {
        for(i=0;i<100;i++)
        {
            int max=num%1000;
            arr[i]=max;
            num/=10;
        }

    }
     for(i=0;i<100;i++)
        {
            printf("%d\t",arr[i]);
        }
    for(i=0;i<100;i++)
    {
        if(large<arr[i])
        {
            large=arr[i];
        }
        continue;
    }*/
    while(num>99)
    {
        max=num%1000;
        if(max>large)
            large=max;
        num/=10;
    }

    printf("Largest:%d\n",large);
    return 0;
}
