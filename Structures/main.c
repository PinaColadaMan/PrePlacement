#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    int roll_no;
    char name[10];
    float score;
};
int main()
{
    struct student s1;
    s1.roll_no=1539;
    strcpy(s1.name,"Nihal");
    s1.score=69;
    printf("Roll_no:%d\n",s1.roll_no);
    printf("Name:%s\n",s1.name);
    printf("Score:%f\n",s1.score);
    return 0;
}
