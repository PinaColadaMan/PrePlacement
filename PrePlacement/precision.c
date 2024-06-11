#include<stdio.h>
#include<math.h>
int main()
{
    float input, output;
    int n;
    printf("Enter float:");
    scanf("%f",&input);
    printf("Enter precision:");
    scanf("%d",&n);
    output=floor(pow(10,n)*input)/pow(10,n);
    printf("%f",output);
    return 0;
}
