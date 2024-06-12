#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Enter string:\n");
    char string[100];
    scanf("%s",string);
    printf("%s\n",strrev(string));
    if(stringstrrev(string))
        printf("Palindrome!");
    else
        printf("Not Palindrome.");
    return 0;
}
