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
    int choice=0;
    do
    {
        printf("Choose:\n1. Update element\n2. Exit\n");
        scanf("%d",&choice);
        if(choice==1)
        {
            int key, index;
            printf("Enter element:\n");
            scanf("%d",&key);
            printf("Enter index:\n");
            scanf("%d",&index);
            for(int i=n-1;i>index-2;i--)
            {
                int temp1=arr[i];
                arr[i+1]=temp1;
            }
            n+=1;
            arr[index-1]=key;
            printf("Updated array:\n");
            for(int i=0;i<n;i++)
            {

                printf("%d\n",arr[i]);
            }
        }

    }while(choice!=2);
    printf("Final array:\n");
    for(int i=0;i<n;i++)
    {

        printf("%d\n",arr[i]);
    }
    return 0;
}
