#include <stdio.h>
#include <stdlib.h>

int main()
{
    int roll[100],n,i,count=0;
    printf("Enter n:\n");
    scanf("%d",&n);
    printf("Enter roll numbers:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&roll[i]);
    }
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(roll[i]==roll[j]){
                for(int k=j;k<n-1;k++){
                    roll[k]=roll[k+1];
                }
                n--;
                j--;
                count++;
            }
        }
    }
    printf("Duplicates:%d\n",count);
    printf("Final Array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",roll[i]);
    }
    return 0;
}
