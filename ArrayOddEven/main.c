#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,arr[100],odd=0,even=0;
    for(int i=0;i<100;i++)
        arr[i]=0;
    printf("Enter N:\n");
    scanf("%d",&n);
    printf("Enter %d elements:\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("Odd:%d\nEven:%d",odd,even);

    return 0;
}
