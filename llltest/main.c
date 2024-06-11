#include<stdio.h>
int main()
{
    int *p,a;
    p=&a;
    *p=10;
    printf("%d\n",*p);
    return 0;
}
