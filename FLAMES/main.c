#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char string1[100],string2[100];
    printf("Enter String 1:\n");
    scanf("%s",string1);
    int len1=strlen(string1);
    printf("Enter String 1:\n");
    scanf("%s",string2);
    int len2=strlen(string2);
    for(int i=0;i<len1+len2;i++)
    {
        for(int j=0;j<len1+len2;j++)
        {
            if(string1[i]==string2[j])
            {   int k=i;
                do
                {
                    string1[k]=string1[k+1];
                    ++k;
                }while(string1[k]!='\0');
                k=i;
                do
                {
                    string2[k]=string2[k+1];
                    ++k;
                }while(string2[k]!='\0');
            }
        }
    }
    printf("String 1:%s",string1);
    printf("String 2:%s",string2);
    return 0;
}/*steps:
    1.remove common characters
    2.concatenate
    3. modulus of n
