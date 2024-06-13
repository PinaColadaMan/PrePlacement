#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int isArm(int num)
{
    int sum=0,temp=num;
    while(temp>0)
    {
        int temp1=temp%10;
        sum+=pow(temp1,3);
        temp/=10;
    }
    if(num==sum)
        return 1;
    else
        return 0;
};
int main()
{
    int n;
    //printf("Enter max range:\n");
    //scanf("&d",&n);
    n=1000;
    printf("Armstrong numbers from 0 to %d:\n",n);
    for(int i=0;i<=n;i++)
    {
        if(isArm(i))
            printf("%d\n",i);
    }
    return 0;
}
