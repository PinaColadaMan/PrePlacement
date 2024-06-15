
#include <stdio.h>
#include <string.h>
 int PassCheck(char str[], int n)
 {
    if ((n < 4) || (n>8))
        return 0;
    else
    {
        int cap = 0, dig = 0, low = 0,special=0;

        for (int i = 0; i < n; i++)
        {
        if (isupper(str[i])) cap++;
        else if (islower(str[i])) low++;
        else if (isdigit(str[i])) dig++;
        else special++;
        }

        return cap > 0 && dig > 0 && low > 0 && special>0;
    }
}

int main() {
    int size;
    scanf("%d",&size);

     if (size < 4 || size > 8) {
        printf("Invalid password length, try again\n");
        return 0;
    }

    char pass[size + 1];
    printf("Enter password: ");
       for(int i=0;i<size;i++)
    scanf("%c",&pass[i]);

    if (PassCheck(pass, size))
        printf("Password valid\n");
    else
        printf("Invalid password, try again\n");

    return 0;
}
