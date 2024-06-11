#include <stdio.h>
#include <stdlib.h>
pendulum(int size, int array[100])
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(array[i]>array[j])
            {
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    printf("Output:\n");
    for(int i=0;i<size;i+=2)
    {
        printf("%d\t",array[i]);
    }
    for(int i=size-1;i>0;i-=2)
    {
        printf("%d\t",array[i]);
    }
};
int main()
{    int n,arr[100];
    printf("Array Size:\n");
    scanf("%d",&n);
    printf("Array Elements:\n");
    for(int i=0;i<=n;i++)
        scanf("%d",&arr[i]);
    pendulum(n,arr);
    return 0;
}
