#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,sum=0;
    printf("Enter num:\n");
    scanf("%d",&num);
    while(num>0)
    {
        int dig=num%10;
        if(dig%2!=0)
        {
            sum+=dig;
        }
        num/=10;
    }
    printf("%d",sum);
    return 0;
}
