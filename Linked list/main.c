#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int steps[1000];
    printf("Enter n:\n");
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&steps[i]);
    int min=0;
    for(int i=0;i<n;i++)
    {
        if(min+=steps[i]<=0)
        {
            min-=steps[i];
        }
        else
            min+=steps[i];
    }
    printf("min cash:%d",min);
    return 0;
}
//to be fixed
