#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,dig,sum=0;
    printf("Enter num:\n");
    scanf("%d",&num);
    printf("Enter dig:\n");
    scanf("%d",&dig);
    while(num>0)
    {
        int temp=num%10;
        if(temp==dig)
        {
            sum++;
        }
        num/=10;
    }
    printf("%d",sum);
    return 0;
}
