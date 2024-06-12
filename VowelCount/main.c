#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    printf("Enter string:\n");
    char string[100];
    scanf("%s",string);
    int j=0,a=0,e=0,i=0,o=0,u=0,count=0;
    while(string[j]!='\0')
    {
        if(tolower(string[j])=='a'||tolower(string[j])=='e'||tolower(string[j])=='i'||tolower(string[j])=='o'||tolower(string[j])=='u')
            count++;
        j++;
    }
    /*int k=0;
    while(string[k]!='\0')
    {
        if(tolower(string[k])=='a')
            a++;
        if(tolower(string[k])=='e')
            e++;
        if(tolower(string[k])=='i')
            i++;
        if(tolower(string[k])=='o')
            o++;
        if(tolower(string[k])=='u')
            u++;
        k++;
    }
    */
    printf("Count of vowels:%d\nA:%d\nE:%d\nI:%d\nO:%d\nU:%d\n",count/*,a,e,i,o,u*/);
    return 0;
}
//print first non repeatng character
