#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[]={1,2,3,4,5};
    printf("%d\n",*a);
    printf("%d\n",&a[0]);
    printf("%d\n",2[a]);
    int b=(1,2,3,4);
    printf("%d\n",b);
    for(int i=0;i<5;i++)
        printf("%d\t",a[i]);
    return 0;
}
