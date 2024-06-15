
#include<stdio.h>
int main()
{
    int i;
    char pass[20];
    char ch;
    printf("Enter the password:\n");
    while((ch = _getch()) != 13)
    {
        pwd[i]=ch;
        i++;
        printf(" * ");
    }
pwd[i]='\0';
printf("Your Password is: %s\n",pwd);
return 0;
}
