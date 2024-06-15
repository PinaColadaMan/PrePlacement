#include <stdio.h>

int main ()
{
    int limit;
    scanf("%d",&limit);
    for(int row=1;row<=limit;row++,printf("\n"))
    {
       for(int col=1;col<=row;col++)
            printf("*");
       for(int col=1;col<=2*(limit-row);col++)
            printf(" ");
       for(int col=1;col<=row;col++)
            printf("*");
    }
    for(int row=limit-1;row>0;row--,printf("\n"))
    {
       for(int col=1;col<=row;col++)
            printf("*");
       for(int col=1;col<=2*(limit-row);col++)
            printf(" ");
       for(int col=1;col<=row;col++)
            printf("*");
    }
    return 0;
}
