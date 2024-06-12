#include <stdio.h>
#include <stdlib.h>
int strlen(char string[100])
{
    int len=0,i=0;
    while(string[i]!='\0')
    {
        i++;
        len++;
    }
    return len;
};
void strrev(char string[100])
{
    char temp[100];
    int len=strlen(string),i=0,j=0;
    for(i=0,j=len-1;i<=len,j>=0;i++,j--)
    {
        temp[i]=string[j];
    }
    printf("Reversed string:%s\n",temp);
};
void strcpy(char string[100])
{
    char temp[100];
    int len=strlen(string),i=0;

    for(i=0;i<len;i++)
    {
        temp[i]=string[i];
    }
    printf("String:%s\n",string);
    printf("String copied:%s\n",temp);
};
void strcmp(char string[100])
{
    printf("Enter 2nd String:\n");
    char temp[100];
    scanf("%s",temp);
    if(string==temp)
        printf("Same\n");
    if(string>temp)
        printf("+1\n");
    if(string<temp)
        printf("-1\n");
};
void strcat(char string[100])
{
    printf("Enter 2nd String:\n");
    char temp[100];
    scanf("%s",temp);
    int len=strlen(string),i=0;
    int len2=strlen(temp);
    for(i=len;i<=len+len2;i++)
    {
        string[i]=temp[i-len];
    }
    printf("concatenated string:%s\n",string);
};
int main()
{
    char string[100];
    printf("Enter String:\n");
    scanf("%s",string);
    printf("Original String:%s\n",string);
    int choice=0;
    do
    {
        printf("Choose:\n1. String Length\n2. String Reverse\n3. String Copy\n4. String Compare\n5. String concat\n6. Exit\n");
        scanf("%d",&choice);
        if(choice==1)
            printf("String Length:%d\n",strlen(string));
        else if(choice==2)
            strrev(string);
        else if(choice==3)
            strcpy(string);
        else if(choice==4)
            strcmp(string);
        else if(choice==5)
            strcat(string);
        else
            printf("Invalid Choice.\n");
    }while(choice!=6);
    printf("Final String:%s\n",string);
    return 0;
}
