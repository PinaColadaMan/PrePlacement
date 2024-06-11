#include <stdio.h>
#include <stdlib.h>

struct NODE
{
    int data;
    struct NODE *next;
};

typedef struct NODE *node;

void getnode(node *n)
{
    *n=(struct NODE *)malloc(sizeof(struct NODE));
}

void append(node *n, int x)
{
    while(*n!=NULL)
        n=&((*n)->next);
    getnode(n);
    (*n)->data=x;
    (*n)->next=NULL;
}

void display(node *n)
{
    printf("\n");
    while(*n!=NULL)
    {
        printf("%d\t",(*n)->data);
        n=&((*n)->next);
    }
    printf("\n");
    return;
}

int delete(node *n,int x)
{
    int count=0;
    while(*n!=NULL)
    {
        if((*n)->data==x)
        {
            node temp=*n;
            *n=(*n)->next;
            free(temp);
            count++;
        }
        else
        {
            n=&((*n)->next);
        }
    }
    return count;
}

int main()
{
    int n;
    node a=NULL;

    while (n!=4)
    {
        printf("Choose:\n1.Insert\n2.Display\n3.Delete\n4.Exit\n");
        scanf("%d",&n);

        if(n==1)
        {
            int d;
            printf("Enter integer:");
            scanf("%d",&d);
            append(&a,d);
        }
        else if(n==2)
        {
            display(&a);
        }
        else if(n==3)
        {
            int d;
            printf("Enter element to delete: ");
            scanf("%d",&d);
            printf("%d elements deleted\n",delete(&a, d));
        }
        else
        {
            return 0;
        }
    }
    exit (0);
}
