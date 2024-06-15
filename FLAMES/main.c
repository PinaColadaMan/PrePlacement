#include<string.h>
#include<stdio.h>
void main()
{
char name1[20];
char name2[20];
gets(name1);
gets(name2);
int l1=strlen(name1);
int l2=strlen(name2);
int a,count=0;
int length=l1+l2;
for(int i=0;i<l1;i++)
{
   for(int j=0;j<l2;j++)
    {
        if(name1[i]== name2[i])
        {
            name1[i]='+';
            name2[i]='+';
             count+=2;
             break;
        }
    }
}
a=(length-count)%6;
char flames[]={'f','l','a','m','e','s'};
printf("%c",flames[a]);
}
