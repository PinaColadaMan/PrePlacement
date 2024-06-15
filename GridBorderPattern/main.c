#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define MIN(a,b) (a)<(b)?(a):(b)
int main()
{
    int num, limit;
    scanf("%d",&num);
    limit=2+num;
    for(int row=1;row<limit;row++,printf("\n"))
    {
        for(int col=1;col<limit;col++)
            printf("%d",min(min(row,col),MIN(limit-row,limit-col)));
    }
    printf("Hello world!\n");
    return 0;
}
